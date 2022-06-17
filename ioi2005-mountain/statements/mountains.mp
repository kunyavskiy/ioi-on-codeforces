ux = 1cm;
uy = 0.3ux;

beginfig(1)
  pickup pencircle scaled (0.05 * ux);
  draw (-0.2ux, 0uy)--(5ux, 0uy);
  draw (0ux, -1uy)--(0ux, 4uy);
  draw (-0.1ux, 1uy)--(0.1ux, 1uy);
  draw (-0.1ux, 2uy)--(0.1ux, 2uy);
  draw (-0.1ux, 3uy)--(0.1ux, 3uy);
  pickup pencircle scaled (0.2 * ux);
  draw (0ux, 0uy);
  draw (1ux, 0uy);
  draw (2ux, 0uy);
  draw (3ux, 0uy);
  draw (4ux, 0uy);
endfig;

beginfig(2)
  pickup pencircle scaled (0.05 * ux);
  draw (-0.2ux, 0uy)--(5ux, 0uy);
  draw (0ux, -1uy)--(0ux, 9uy);
  draw (-0.1ux, 1uy)--(0.1ux, 1uy);
  draw (-0.1ux, 2uy)--(0.1ux, 2uy);
  draw (-0.1ux, 3uy)--(0.1ux, 3uy);
  draw (-0.1ux, 4uy)--(0.1ux, 4uy);
  draw (-0.1ux, 5uy)--(0.1ux, 5uy);
  draw (-0.1ux, 6uy)--(0.1ux, 6uy);
  draw (-0.1ux, 7uy)--(0.1ux, 7uy);
  draw (-0.1ux, 8uy)--(0.1ux, 8uy);
  draw (0ux, 0uy)--(1ux, 2uy)--(2ux, 4uy)--(3ux, 6uy)--(4ux, 8uy);
  pickup pencircle scaled (0.2 * ux);
  draw (0ux, 0uy);
  draw (1ux, 2uy);
  draw (2ux, 4uy);
  draw (3ux, 6uy);
  draw (4ux, 8uy);
endfig;

beginfig(3)
  pickup pencircle scaled (0.05 * ux);
  draw (-0.2ux, 0uy)--(5ux, 0uy);
  draw (0ux, -1uy)--(0ux, 6uy);
  draw (-0.1ux, 1uy)--(0.1ux, 1uy);
  draw (-0.1ux, 2uy)--(0.1ux, 2uy);
  draw (-0.1ux, 3uy)--(0.1ux, 3uy);
  draw (-0.1ux, 4uy)--(0.1ux, 4uy);
  draw (-0.1ux, 5uy)--(0.1ux, 5uy);
  draw (0ux, 0uy)--(1ux, 2uy)--(2ux, 1uy)--(3ux, 3uy)--(4ux, 5uy);
  pickup pencircle scaled (0.2 * ux);
  draw (0ux, 0uy);
  draw (1ux, 2uy);
  draw (2ux, 1uy);
  draw (3ux, 3uy);
  draw (4ux, 5uy);
endfig;

end.
