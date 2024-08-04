<template>
  <div>
    <TopBar />
    <div class="contact-page">
      <h1>Contato</h1>
      <div class="contact-info">
        <p><strong>Email:</strong> <a href="mailto:marcosdelimaprado@gmail.com">marcosdelimaprado@gmail.com</a></p>
        <p><strong>Phone:</strong> <a href="tel:+1234567890">+55 (61) 99806-2868</a></p>
        <p><strong>GitHub:</strong> <a href="https://github.com/marcoslprado" target="_blank">github.com/marcoslprado</a></p>
        <p><strong>GitLab:</strong> <a href="https://gitlab.com/marcoslprado1" target="_blank">gitlab.com/marcoslprado1</a></p>
      </div>
    </div>
  </div>
</template>

<script>
import TopBar from '../components/Header.vue';

export default {
  name: 'Contact',
  components: {
    TopBar
  }
}
</script>

<style scoped>
html, body {
  height: 100%;
  margin: 0;
  padding: 0;
  background-color: #1E1E1E; /* Cor de fundo igual ao header */
}

.contact-page {
  display: flex;
  flex-direction: column;
  align-items: center;
  justify-content: center;
  min-height: 100vh;
  width: 100%;
  color: white;
  background-color: #1E1E1E; /* Cor de fundo igual ao header */
}

.container {
  text-align: center;
  padding: 20px;
}

h1 {
  font-size: 2.5em;
  margin-bottom: 20px;
  color: #FFD700;
  text-shadow: 2px 2px 4px rgba(0, 0, 0, 0.7); /* Sombra de texto */
}

p {
  font-size: 1.2em;
  margin: 10px 0;
  text-shadow: 1px 1px 2px rgba(0, 0, 0, 0.7); /* Sombra de texto */
}

a {
  color: #FFD700;
  text-decoration: none;
}

a:hover {
  text-decoration: underline;
}
</style>