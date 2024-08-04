<template>
  <!-- Container principal da página -->
  <div class="team-sort-page">
    <!-- Componente do header/top bar -->
    <TopBar />
    <!-- Container principal para o conteúdo -->
    <div class="container">
      <h1>Sorteador de Times EA FC 24</h1>
      <!-- Seção para exibir os times dos jogadores -->
      <div class="players">
        <!-- Card para o Jogador 1, exibido apenas se player1Team não for nulo -->
        <div class="player-card" v-if="player1Team">
          <img :src="player1Team.logoUrl" alt="Player 1 Team" v-if="player1Team.logoUrl">
          <h2>Jogador 1:</h2>
          <h3>{{ player1Team.name }}</h3>
          <p><strong>Ataque:</strong> {{ player1Team.atkRating }}</p>
          <p><strong>Meio-Campo:</strong> {{ player1Team.midRating }}</p>
          <p><strong>Defesa:</strong> {{ player1Team.defRating }}</p>
          <p><strong>Overall:</strong> {{ player1Team.overall }}</p>
        </div>
        <!-- Card para o Jogador 2, exibido apenas se player2Team não for nulo -->
        <div class="player-card" v-if="player2Team">
          <img :src="player2Team.logoUrl" alt="Player 2 Team" v-if="player2Team.logoUrl">
          <h2>Jogador 2:</h2>
          <h3>{{ player2Team.name }}</h3>
          <p><strong>Ataque:</strong> {{ player2Team.atkRating }}</p>
          <p><strong>Meio-Campo:</strong> {{ player2Team.midRating }}</p>
          <p><strong>Defesa:</strong> {{ player2Team.defRating }}</p>
          <p><strong>Overall:</strong> {{ player2Team.overall }}</p>
        </div>
      </div>
      <!-- Botão para sortear os times -->
      <button @click="sortTeams">Sortear</button>
    </div>
  </div>
</template>

<script>
import axios from 'axios';  // Importando a biblioteca axios para fazer requisições HTTP
import TopBar from '../components/Header.vue';  // Importando o componente TopBar

export default {
  components: {
    TopBar  // Registrando o componente TopBar para uso no template
  },
  data() {
    return {
      player1Team: null,  // Inicializando player1Team como null
      player2Team: null   // Inicializando player2Team como null
    };
  },
  methods: {
    // Método para obter um time aleatório do backend
    async getRandomTeam() {
      try {
        const response = await axios.get('http://localhost:8080/randomTeam');  // Fazendo a requisição GET para o endpoint /randomTeam
        return response.data;  // Retornando os dados da resposta
      } catch (error) {
        console.error('Erro ao obter time aleatório:', error);  // Logando o erro no console
        return {};  // Retornando um objeto vazio em caso de erro
      }
    },
    // Método para sortear os times dos jogadores
    async sortTeams() {
      let player1Team = await this.getRandomTeam();  // Obtendo um time aleatório para o Jogador 1
      let player2Team;
      // Garantindo que os times sorteados para os jogadores sejam diferentes
      do {
        player2Team = await this.getRandomTeam();  // Obtendo um time aleatório para o Jogador 2
      } while (player1Team.name === player2Team.name);

      // Atribuindo os times sorteados às variáveis de estado
      this.player1Team = player1Team;
      this.player2Team = player2Team;
    }
  }
};
</script>

<style scoped>
.team-sort-page {
  display: flex;
  flex-direction: column;
  align-items: center;
  justify-content: center;
  min-height: 100vh;
  background-size: cover;
  background-position: center;
  background-repeat: no-repeat;
  padding: 20px;
  color: #FFF;
  text-align: center;
}

.container {
  background-color: rgba(0, 0, 0, 0.7);
  border-radius: 10px;
  padding: 20px;
  margin-top: 80px; /* Espaço para o header fixo */
  max-width: 600px; /* Ajuste o valor conforme necessário */
}

h1 {
  font-size: 2.5em;
  margin-bottom: 20px;
  color: #FFD700;
  text-shadow: 2px 2px 4px rgba(0, 0, 0, 0.7);
}

.players {
  display: flex;
  justify-content: center;
  gap: 20px;
  margin-bottom: 20px;
}

.player-card {
  background: rgba(255, 255, 255, 0.1);
  border-radius: 10px;
  padding: 20px;
  width: 200px;
  text-align: center;
  box-shadow: 0 4px 8px rgba(0, 0, 0, 0.3);
  transition: transform 0.3s ease-in-out;
}

.player-card:hover {
  transform: scale(1.05);
}

.player-card img {
  width: 100px;
  height: 100px;
  border-radius: 50%;
  margin: 10px 0;
}

.player-card h2, .player-card h3 {
  margin: 10px 0;  /* Adicionando margem para garantir espaçamento uniforme */
}

.player-card p {
  margin: 5px 0; /* Adicionando margem para os parágrafos */
}

button {
  font-size: 1.2em;
  padding: 10px 20px;
  background-color: #FFD700;
  border: none;
  border-radius: 5px;
  color: #000;
  cursor: pointer;
  transition: background-color 0.3s, transform 0.3s;  /* Adicionando animação de transformação */
  margin-top: 20px;
}

button:hover {
  background-color: #FFC700;
  transform: scale(1.1);  /* Ampliando o botão ao passar o mouse */
}
</style>
