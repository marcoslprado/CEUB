# Programa que randomiza um time para jogar no FIFA #
from random import randint

def DiscoverUserPreferencies():
    try:
        choice = int(input("Digite 0 para randomizar um time completamente aleatório ou 1 para randomizar um dos melhores times das ligas mais conhecidas: "))
        if choice !=0 or choice != 1:
            print("Você deve digitar um número sendo ele 0 ou 1! Tente novamente.")
            DiscoverUserPreferencies()
    except:
        print("Você deve inserir um número sendo ele 0 ou 1! Tente novamente.")
        DiscoverUserPreferencies()
DiscoverUserPreferencies()

def Randomize(choice):
    league = randint()
