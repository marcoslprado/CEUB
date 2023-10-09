# Programa que randomiza um time para jogar no FIFA #
import random
import sys
import time
import os

def Random(): 
    lista = [
        "Argentinos Juniors", "Boca Juniors", "Estudiantes", "Independiente", "Old Boys", "Racing", "River Plate", "San Lorenzo", "Rosario Central", "Vélez",
        "Club Brugge"
        "Arsenal", "Aston Villa", "Brighton", "Chelsea", "Everton", "Crystal Palace", "Liverpool", "Manchester City", "Manchester United", "Newcastle", "Tottenham", "West Ham", "Wolves",
        "Monaco", "Lyon", "Olympique de Marselha", "PSG", "Nantes", "Lille", "Nice",
        "Borussia Dortmund", "Bayern de Munique", "Bayer Leverkusen", "RB Leipzig",
        "Juventus", "Fiorentina", "Inter de Milão", "Lazio", "Milan", "Napoli", "Roma",
        "Argentina", "Bélgica", "Inglaterra", "França", "Alemanha", "Itália", "México", "Holanda", "Polônia", "Portugal", "Espanha",
        "Ajax", "AZ", "PSV",
        "Porto", "Benfica","Sporting",
        "AEK Atenas", "Dinamo Zagreb", "Dynamo Kyev", "Olympiacos", "Panathinaikos", "Shakhtar", "Spartak Moscou", "Viktoria Pilsen", "adidas All-Star", "Soccer Aid",
        "Atlético Bilbao", "Atlético de Madrid", "Barcelona", "Real Madrid", "Sevilla", "Valencia", "Villarreal", "Real Sociedad", "Real Betis",
        "Besiktas", "Fenerbahce", "Galatasaray"
    ]
    random_team = random.choice(lista)
    print("Sorteando time...")
    time.sleep(2)
    print("Time sorteado: ", random_team)
    time.sleep(3)
    os.system('cls')
    



def Choice():
    while True:
        print(f"|======================================================|")
        print(f"|--------------SORTEADOR DE TIMES DO FIFA--------------|")
        print(f"|======================================================|")
        print(f"| 1. Sortear um time                                   |")
        print(f"| 2. Sair                                              |")
        print(f"|======================================================|")
        try:
            choice = int(input("Escolha uma opção: "))
            if choice == 1:
                Random()
            elif choice == 2:
                sys.exit()
            else:
                print("Você deve digitar 1 ou 2! Tente novamente.")
        except ValueError:
            print("Você deve inserir um número! Tente novamente.")


Choice()
