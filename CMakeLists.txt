cmake_minimum_required(VERSION 3.10)
project(Calculator)

add_executable(calculator src/main.c src/lib/calculator.c)

enable_testing()

add_test(NAME t1 COMMAND calculator add 2 3)
add_test(NAME t2 COMMAND calculator sub 3 -2)
add_test(NAME t3 COMMAND calculator mul 5 5)
add_test(NAME t4 COMMAND calculator divide 10 2) # Renommer le test de div en divide
add_test(NAME t5 COMMAND calculator car 5) # Ajout du test pour la fonction car
