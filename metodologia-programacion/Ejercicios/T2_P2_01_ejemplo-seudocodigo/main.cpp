/*
Calcular el volumen de un cilindro dada su altura y el radio de la base.

Interfaz:
    Entrada: real r, h
    Salida: real vol

Efecto:
    Condiciones previas: r>0, h>0
    Efecto producido: vol=3.14*r*r*h

Algoritmo Cálculo Volumen Cilindro:
constantes
    PI = 3.14
variables
    real r, h
    real vol
    real base
principio
    leer (r,h)
    base = PI*r*r
    vol = base * h
    escribir(vol)
fin
*/
