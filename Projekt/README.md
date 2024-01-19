# Implementacja wielomianów na bazie tablic
## Opis problemu
Sposób zastosowania i używanie wielomianów w kodzie. Implementacja zawiera obiekt z tablicą której indeksy odpowiadają odpowiedniej potędze wielomianu.

| Indeks | Współczynnik |
| ------ | ------------ |
| 0      | 3         |
| 1      | 8         |
| 2      | 9         |
| 3      | 6         |

Odpowiada zapisowi:
> 6x^3 + 9x^2 + 8x + 3

## Uruchamianie programu oraz użytkowanie

Program można uruchomić komendą: `make run`

Kompiluje on plik ze zdefiniowanymi metodami oraz plik testujący wszystkie operacje.
Wielomian w programie inicjujemy w poniższy sposób:

```cpp
Wielomian p1({3, 8, 9, 6});
```
## Operacje
Zostały one zaimplementowane za pomocą przeciążenia operatorów.

n - rozmiar większego stopniem wielomianu  
m - rozmiar minejszego stopniem wielomianu
### Dodawanie
```cpp
Wielomian sum = p1 + p2;
```
Złożoność obliczeniowa: **O(n)**

### Odejmowanie
```cpp
Wielomian sum = p1 - p2;
```
Złożoność obliczeniowa: **O(n)**
### Mnożenie
```cpp
Wielomian sum = p1 * p2;
```
Złożoność obliczeniowa: **O(n*m)**
### Obliczanie wartości
Zostało zaimplementowane używając **algorytmu Hornera** w celu uproszczenia obliczeń do *N* mnożeń oraz *N* dodawań.
```cpp
double val = suma.Oblicz(2);
```
Złożoność obliczeniowa: **O(N)**
