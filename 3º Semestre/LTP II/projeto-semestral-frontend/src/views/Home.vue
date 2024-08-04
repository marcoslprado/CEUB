<template>
  <div class="home-page">
    <TopBar />
    <div class="content">
      <h1>Bem-vindo ao E-Sports Draft</h1>
      <p>Aqui você pode sortear times para jogar uma partida de FIFA e criar torneios para se divertir com seus amigos.</p>
    </div>
  </div>
</template>

<script>
import TopBar from '../components/Header.vue';

export default {
  name: 'Home',
  components: {
    TopBar
  }
};
</script>

<style scoped>
html, body {
  height: 100%;
  margin: 0;
}

.home-page {
  display: flex;
  flex-direction: column;
  align-items: center;
  justify-content: center;
  min-height: 100vh;
  width: 100%;
  background-image: url('../assets/home.jpg'); /* Caminho para sua imagem de fundo */
  background-size: cover; /* Ajusta a imagem para cobrir todo o container */
  background-position: center; /* Centraliza a imagem */
  background-repeat: no-repeat; /* Não repete a imagem */
  position: relative; /* Necessário para o overlay */
}

.home-page::before {
  content: "";
  position: absolute;
  top: 0;
  left: 0;
  width: 100%;
  height: 100%;
  background-color: rgba(0, 0, 0, 0.5); /* Overlay semi-transparente */
  z-index: 1;
}

.content {
  position: relative;
  z-index: 2;
  margin-top: 80px; /* Espaço para o header fixo */
  text-align: center;
  color: #FFFFFF;
}

h1 {
  font-size: 2.5em;
  margin-bottom: 20px;
  color: #FFD700;
  text-shadow: 2px 2px 4px rgba(0, 0, 0, 0.7); /* Sombra de texto */
}

p {
  font-size: 1.2em;
  line-height: 1.5em;
  text-shadow: 1px 1px 2px rgba(0, 0, 0, 0.7); /* Sombra de texto */
  -webkit-text-stroke: 1px lightblue; /* Contorno amarelo para WebKit browsers */
  color:"FFFFFF"
}
</style>
