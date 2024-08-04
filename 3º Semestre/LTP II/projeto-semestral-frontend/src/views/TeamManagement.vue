<template>
    <div>
      <TopBar />
      <team-component />
    </div>
  </template>
  
  <script>
  import TopBar from '../components/Header.vue';
  import TeamComponent from '../components/TeamComponent.vue';
  
  export default {
    name: 'TeamManagement',
    components: {
      TopBar,
      TeamComponent
    }
  };
  </script>
  
  <style scoped>
  </style>