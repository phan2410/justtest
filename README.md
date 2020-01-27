# This is a very big title

$$y=\displaystyle f\left(\sum_{i=1}^{n}w_ix_i-b\right)$$

\begin{center}
				\begin{tikzpicture}
					\node at (0,0) {\large Input};
					\node at (0,-1cm) {\Large $x_1$};
					\node at (0,-2cm) {\Large $x_2$};
					\node at (0,-3cm) {\Large $\vdots$};
					\node at (0,-4cm) {\Large $x_n$};	
					\pgftransformxshift{0.7cm}	
					\draw[very thick,->] (0,-1cm) --++(1.3cm,0);	
					\draw[very thick,->] (0,-2cm) --++(1.3cm,0);
					\draw[very thick,->] (0,-4cm) -++(1.3cm,0);
					\pgftransformxshift{1.65cm}		
					\node at (0,0) {\large Weights};
					\draw[thick] (0,-1cm) circle(0.35cm) node {\large $\mathbf{w_1}$};
					\draw[thick] (0,-2cm) circle(0.35cm) node {\large $\mathbf{w_2}$};
					\draw[thick] (0,-4cm) circle(0.35cm) node {\large $\mathbf{w_n}$};
					\pgftransformxshift{3.3cm}
					\node at (0,0) {\large Neuron};
					\draw[thick] (0,-2.5cm) ellipse (1.2cm and 0.7cm);
					\draw[thick] (0,-1.8cm) -- ++(0,-1.4cm);
					\node at (-0.5cm,-2.5cm) {\Large $\mathbf{\Sigma}$};
					\def\filterPath{--++(-0.11cm,-0.25cm)--++(-0.14cm,0)--++(0.14cm,0)--++(0.22cm,0.5cm)--++(0.14cm,0)--++(-0.14cm,0)--++(-0.11cm,-0.25cm)--++(-0.125cm,0)--++(0.25cm,0)}
					\draw[thick] (0.5cm,-2.5cm) \filterPath;
					\node at (-0.5cm,-3.7cm) {\tiny summing};
					\node at (-0.5cm,-3.9cm) {\tiny function};
					\node at (0.9cm,-3.4cm) {\tiny activation};
					\node at (0.9cm,-3.6cm) {\tiny function};
					\pgftransformxshift{-2.95cm}
					\draw[very thick,->] (0,-1cm) --++(1.5cm,0)--++(0.85cm,-0.85cm);
					\draw[very thick,->] (0,-2cm) --++(1.5cm,0)--++(0.25cm,-0.25cm);
					\draw[very thick,->] (0,-4cm) --++(1.5cm,0)--++(0.85cm,0.85cm);
					\pgftransformxshift{4.2cm}
					\draw[very thick,->] (0,-2.5cm) --++(2cm,0);
					\pgftransformxshift{2.5cm}
					\node at (0,0) {\large Output};
					\node at (0,-2.5cm) {\Large $y$};
				\end{tikzpicture}
			\end{center}