import { createRouter, createWebHistory } from 'vue-router'
import Contact from '../views/Contact.vue'
import TeamSortPage from '../views/TeamSortPage.vue'
import Home from '../views/Home.vue'
import TeamManagement from '../views/TeamManagement.vue';



const router = createRouter({
  history: createWebHistory(import.meta.env.BASE_URL),
  routes: [
    {
      path: '/',
      name: 'Página inicial',
      component: Home
    },
    {
      path: '/sorteador',
      name: 'sorteador',
      component: TeamSortPage
    },
    {
      path: '/gerenciarTimes',
      name: 'gerenciarTimes',
      component: TeamManagement
    },
    {
      path: '/contato',
      name: 'contato',
      component: Contact
    }
  ]
})  

export default router
