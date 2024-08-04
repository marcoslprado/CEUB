// src/services/teamService.js

import api from '../api'; // Importa a instância do axios configurada em api.js

/**
 * Função para adicionar um time ao banco de dados
 * @param {Object} team - Objeto que representa o time a ser adicionado
 * @returns {Object} - O time adicionado retornado pela API
 * @throws {Error} - Erro caso a requisição falhe
 */
export const addTeam = async (team) => {
  try {
    const response = await api.post('/addTeam', team);
    return response.data;
  } catch (error) {
    console.error("Erro ao adicionar time:", error);
    throw error;
  }
};

/**
 * Função para atualizar um time no banco de dados
 * @param {Object} team - Objeto que representa o time a ser atualizado
 * @returns {Object} - O time atualizado retornado pela API
 * @throws {Error} - Erro caso a requisição falhe
 */
export const updateTeam = async (team) => {
  try {
    const response = await api.put('/updateTeam', team);
    return response.data;
  } catch (error) {
    console.error("Erro ao atualizar time:", error);
    throw error;
  }
};

/**
 * Função para deletar um time no banco de dados
 * @param {string} name - Nome do time a ser deletado
 * @returns {Object} - A resposta da API após a deleção
 * @throws {Error} - Erro caso a requisição falhe
 */
export const deleteTeam = async (name) => {
  try {
    // Envia uma requisição DELETE para a rota /deleteTeam com os dados em formato JSON
    const response = await api.delete('/deleteTeam', {
      data: { name } // Enviar o nome do time como um objeto JSON
    });
    // Retorna os dados retornados pela API após a deleção
    return response.data;
  } catch (error) {
    console.error("Erro ao deletar time:", error); // Loga o erro no console
    throw error; // Lança o erro para ser tratado onde a função foi chamada
  }
};

/**
 * Função para obter um time aleatório do banco de dados
 * @returns {Object} - O time aleatório retornado pela API
 * @throws {Error} - Erro caso a requisição falhe
 */
export const getRandomTeam = async () => {
  try {
    const response = await api.get('/randomTeam');
    return response.data;
  } catch (error) {
    console.error("Erro ao obter time aleatório:", error);
    throw error;
  }
};
