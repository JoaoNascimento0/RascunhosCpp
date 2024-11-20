#include <stdio.h>
#include <SDL2/SDL.h>

int main(int argc, char* args[]){
  // Inicializa a biblioteca SDL
  SDL_Init(SDL_INIT_VIDEO);

  // Cria uma janela
  SDL_Window* window = SDL_CreateWindow("Meu gráfico", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, SDL_WINDOW_SHOWN);

  // Cria um renderer para a janela
  SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);

  // Define a cor de fundo como branco
  SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);

  // Limpa a tela
  SDL_RenderClear(renderer);

  // Define a cor da linha como preto
  SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);

  // Desenha a linha
  SDL_RenderDrawLine(renderer, 0, 240, 640, 240);

  // Atualiza a janela
  SDL_RenderPresent(renderer);

  // Espera um pouco
  SDL_Delay(3000);

  // Libera a memória alocada
  SDL_DestroyRenderer(renderer);
  SDL_DestroyWindow(window);
  SDL_Quit();

  return 0;
}