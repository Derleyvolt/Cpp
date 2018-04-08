Uma demo sobre relações de equivalência e ordens

A relação R é

Reflexiva se x R x é true para todos os x

Irreflexiva se x R x é false para todos os x

Simétrico se quando x R y for true, então y R x também deve ser
  
Anti-simétrico se quando x R y é true então y R x é false

Transitivo se quando x R y e y R z for true, então x R z também deve ser

A relação = é reflexiva, simétrica e transitivo. A relação < é irreflexiva e transitiva. A relação ≤ é reflexiva e transitiva.

Uma relação binária é considerada de partial order se ela for:

1 - reflexiva
2 - antisimetrica
3 - transitiva

Uma relação binária é considerada uma relação de equivalência se ela for:

1 - reflexiva
2 - simétrica
3 - transitiva

Dados retirados desse site -> http://sidd-reddy.blogspot.com.br/2011/01/i-was-going-over-c-stl-when-i-noticed.html

Given a function f (which models a binary relation) over a domain D, and a, b ∈ D:

Reflexivity: f (a, a) is true.
Asymmetry: For a ≠ b, if f(a, b) is true, f(b,a) is false
Anti-symmetry: If f(a, b) and f(b, a) are both true iff a ≡ b
Transitivity: If f(a, b) and f(b, c) are true, then f(a, c) is true
Incomparability: Neither f(a, b) nor f(b, a) is true
Transitivity of incomparability: If a and b are incomparable, and so are b and c, then a and c are incomparable.

