<template>
  <div class="team-management">
    <h1>Gerenciamento de Times</h1>
    
    <!-- Formulário para adicionar ou atualizar um time -->
    <form @submit.prevent="handleSubmit" class="team-form">
      <div class="form-group">
        <label for="name">Nome:</label>
        <input type="text" id="name" v-model="team.name" required>
      </div>
      <div class="form-group">
        <label for="country">País:</label>
        <input type="text" id="country" v-model="team.country" required>
      </div>
      <div class="form-group">
        <label for="league">Liga:</label>
        <input type="text" id="league" v-model="team.league" required>
      </div>
      <div class="form-group">
        <label for="overall">Overall:</label>
        <input type="number" id="overall" v-model="team.overall" required>
      </div>
      <div class="form-group">
        <label for="atkRating">Ataque:</label>
        <input type="number" id="atkRating" v-model="team.atkRating" required>
      </div>
      <div class="form-group">
        <label for="midRating">Meio:</label>
        <input type="number" id="midRating" v-model="team.midRating" required>
      </div>
      <div class="form-group">
        <label for="defRating">Defesa:</label>
        <input type="number" id="defRating" v-model="team.defRating" required>
      </div>
      <div class="form-group">
        <label for="logoUrl">Logo URL:</label>
        <input type="text" id="logoUrl" v-model="team.logoUrl" required>
      </div>
      <button type="submit">Salvar Time</button>
    </form>

    <!-- Botão para obter um time aleatório -->
    <button @click="fetchRandomTeam" class="btn">Obter Time Aleatório</button>

    <!-- Exibição dos detalhes do time aleatório -->
    <div v-if="randomTeam" class="random-team">
      <h2>Time Aleatório</h2>
      <p><strong>Nome:</strong> {{ randomTeam.name }}</p>
      <p><strong>País:</strong> {{ randomTeam.country }}</p>
      <p><strong>Liga:</strong> {{ randomTeam.league }}</p>
      <p><strong>Overall:</strong> {{ randomTeam.overall }}</p>
      <p><strong>Ataque:</strong> {{ randomTeam.atkRating }}</p>
      <p><strong>Meio:</strong> {{ randomTeam.midRating }}</p>
      <p><strong>Defesa:</strong> {{ randomTeam.defRating }}</p>
      <p><strong>Logo:</strong> <img :src="randomTeam.logoUrl" alt="Logo"></p>
      <button @click="deleteTeam(randomTeam.name)" class="btn danger">Excluir Time</button>
      <button @click="editTeam(randomTeam)" class="btn">Editar Time</button>
    </div>
  </div>
</template>

<script>
import { addTeam, updateTeam, deleteTeam, getRandomTeam } from '../services/teamService';

export default {
  data() {
    return {
      team: {
        name: '',
        country: '',
        league: '',
        overall: 0,
        atkRating: 0,
        midRating: 0,
        defRating: 0,
        logoUrl: ''
      },
      randomTeam: null
    };
  },
  methods: {
    async handleSubmit() {
      try {
        if (this.teamExists(this.team.name)) {
          await updateTeam(this.team);
          alert('Time atualizado com sucesso!');
        } else {
          await addTeam(this.team);
          alert('Time adicionado com sucesso!');
        }
        this.resetForm();
      } catch (error) {
        console.error("Erro ao salvar time:", error);
        alert('Ocorreu um erro ao salvar o time.');
      }
    },
    async fetchRandomTeam() {
      try {
        const team = await getRandomTeam();
        this.randomTeam = team;
      } catch (error) {
        console.error("Erro ao obter time aleatório:", error);
        alert('Ocorreu um erro ao obter o time aleatório.');
      }
    },
    async deleteTeam(name) {
      try {
        await deleteTeam(name);
        alert('Time excluído com sucesso!');
        this.randomTeam = null; // Limpa os dados do time após a exclusão
      } catch (error) {
        console.error("Erro ao excluir time:", error);
        alert('Ocorreu um erro ao excluir o time.');
      }
    },
    editTeam(team) {
      // Preenche o formulário com os dados do time selecionado para edição
      this.team = { ...team };
    },
    async updateTeam() {
      try {
        await updateTeam(this.team);
        alert('Time atualizado com sucesso!');
        this.resetForm();
      } catch (error) {
        console.error("Erro ao atualizar time:", error);
        alert('Ocorreu um erro ao atualizar o time.');
      }
    },
    resetForm() {
      // Limpa o formulário após a submissão ou edição
      this.team = {
        name: '',
        country: '',
        league: '',
        overall: 0,
        atkRating: 0,
        midRating: 0,
        defRating: 0,
        logoUrl: ''
      };
    },
    teamExists(name) {
      // Verifica se o time já existe na lista exibida
      return this.randomTeam && this.randomTeam.name === name;
    }
  }
};
</script>


<style scoped>
.team-management {
  background-color: #333; /* Cor de fundo escura */
  color: #fff; /* Cor do texto */
  padding: 20px;
  font-family: Arial, sans-serif;
}

.team-management h1 {
  margin-top: 100px; /* Remove o espaço superior padrão do h1 */
  font-size: 24px; /* Tamanho de fonte ajustado */
}

.team-form {
  margin-bottom: 20px;
}

.form-group {
  margin-bottom: 10px;
}

.btn {
  background-color: #007bff; /* Azul para botões normais */
  color: #fff;
  border: none;
  padding: 8px 16px;
  margin-right: 10px;
  cursor: pointer;
  border-radius: 4px;
}

.btn.danger {
  background-color: #dc3545; /* Vermelho para botões de ação perigosa */
}

.btn:hover {
  opacity: 0.8;
}

.random-team {
  margin-top: 20px;
  padding: 10px;
  background-color: #444;
  border-radius: 8px;
}

.random-team p {
  margin-bottom: 5px;
}

.random-team img {
  max-width: 100px;
  height: auto;
  margin-top: 5px;
  border-radius: 4px;
}
</style>
