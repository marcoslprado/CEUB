<template>
  <header>
    <div class="container">
      <h1><router-link to="/">E-Sports Draft</router-link></h1>
      <nav>
        <div class="menu-icon" @click="toggleMenu">
          &#9776;
        </div>
        <ul :class="{ active: menuActive }">
          <li><router-link to="/sorteador">Sorteador de Times</router-link></li>
          <li><router-link to="/gerenciarTimes">Gerenciar Times</router-link></li>
          <li><router-link to="/contato">Contato</router-link></li>
        </ul>
      </nav>
    </div>
  </header>
</template>

<script>
export default {
  name: 'Header',
  data() {
    return {
      menuActive: false
    };
  },
  methods: {
    toggleMenu() {
      this.menuActive = !this.menuActive;
    }
  }
}
</script>

<style scoped>
header {
  background-color: #333;
  color: white;
  padding: 1em 0;
  width: 100%;
  position: fixed;
  top: 0;
  left: 0;
  z-index: 1000;
}

.container {
  display: flex;
  justify-content: space-between;
  align-items: center;
  max-width: 1200px;
  margin: 0 auto;
  padding: 0 2em;
}

h1 {
  font-size: 1.5em;
  margin: 0;
}

h1 a {
  color: #FFD700; 
  text-decoration: none; 
}

h1 a:hover {
  text-decoration: underline; /* Adicionar sublinhado ao passar o mouse, se desejar */
}

nav ul {
  list-style: none;
  display: flex;
  gap: 1em;
  padding: 0;
  margin: 0;
}

nav ul li {
  margin: 0;
}

nav ul li a {
  color: white;
  text-decoration: none;
  font-size: 1em;
}

nav ul li a:hover {
  text-decoration: underline;
}

.menu-icon {
  display: none;
  font-size: 2em;
  cursor: pointer;
}

/* Media Queries para Responsividade */
@media (max-width: 768px) {
  .menu-icon {
    display: block;
  }

  nav ul {
    display: none;
    flex-direction: column;
    gap: 0.5em;
    width: 100%;
    background-color: #333;
    position: absolute;
    top: 100%;
    left: 0;
    padding: 1em 0;
  }

  nav ul.active {
    display: flex;
  }

  nav ul li {
    text-align: center;
  }
}
</style>
