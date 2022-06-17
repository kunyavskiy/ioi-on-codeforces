u = 1cm;
w = 0.05u;

def edge (expr a, b, i, j, r) = begingroup
	path p;
	pair d;
	p := a -- b;
	d := (b - a) scaled 0.1 rotated 270;
	drawarrow ((point i of p) -- (point j of p)) scaled u;
	label (r, (point 0.5 of p) shifted d scaled u);
endgroup; enddef;

def vertex (expr c, r, s, t) = begingroup
	fill fullcircle scaled r shifted c scaled u withcolor 0.85 white;
	draw fullcircle scaled r shifted c scaled u;
	label (s, c scaled u);
	label (t, c shifted (0.0, -0.5) scaled u);
endgroup; enddef;

beginfig (1)
	pickup pencircle scaled w;
	edge ((8, 2), (6, 4), 0.1, 0.9,  "3");
	edge ((8, 6), (6, 4), 0.1, 0.9,  "5");
	edge ((6, 4), (4, 2), 0.1, 0.9, "10");
	edge ((4, 2), (2, 4), 0.1, 0.8,  "1");
	vertex ((8, 2), 0.50, "4",  "1");
	vertex ((8, 6), 0.50, "3", "10");
	vertex ((6, 4), 0.50, "2",  "1");
	vertex ((4, 2), 0.50, "1",  "1");
	vertex ((2, 4), 1.05, "0",   "");
endfig;

end.
