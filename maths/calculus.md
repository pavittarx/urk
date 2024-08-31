---
sticker: emoji//1f61c
---

# Deivatives

## Standard Functions

$\dfrac{d}{dx}(u^n) = n.u^{n-1} \times \dfrac{du}{dx}$                        $\dfrac{d}{dx}(x^n) = n.x^{n-1}$            

$\dfrac{dx}{dx} = 1$                    $\dfrac{d}{dx}(x^2) = 2x$       

$\dfrac{d}{dx}(x^3) = 3x^2$

$\dfrac{d}{dx}(\dfrac{1}{x}) = \dfrac{-1}{x^2}$         $\dfrac{d}{dx}(\dfrac{1}{x^2}) = \dfrac{-2}{x^3}$      

$\dfrac{d}{dx}(\frac{1}{x^3}) = \dfrac{-3}{x^4}$

$\dfrac{d}{dx}(\sqrt{x}) = \dfrac{1}{2 \sqrt{x}}$           $\dfrac{d}{dx}(\dfrac{1}{\sqrt{x}}) = \dfrac{-1}{2}x^{\dfrac{-3}{2}}$

----

$\frac{d}{dx}(constant) = 0$

$\frac{d}{dx}(log x) = \frac{1}{x}$

$\frac{d}{dx}(e^x) = e^x$

--------

##### Trignometric

$\frac{d}{dx}(\sin{x}) = \cos{x}$

$\frac{d}{dx}(\cos{x}) = - \sin{x}$

$\frac{d}{dx}(\tan{x})= \sec^2{x}$

$\frac{d}{dx}(\csc{x}) = - \csc{x}.\cot{x}$

$\frac{d}{dx}(\sec{x}) = \sec{x}.\tan{x}$

$\frac{d}{dx}(\cot{x}) = - \csc^2{x}$

---------
##### Inverse Trignometric Functions

$\frac{d}{dx}(\sin^{-1}{x}) = \frac{1}{\sqrt{1 - x^2}}$

$\frac{d}{dx}(\cos^{-1}{x}) = \frac{-1}{\sqrt{1-x^2}}$

$\frac{d}{dx}(\tan^{-1}{x}) = \frac{1}{1+x^2}$

$\frac{d}{dx}(\cot^{-1}{x}) = \frac{-1}{1+x^2}$

$\frac{d}{dx}(\sec^{-1}{x}) = \frac{1}{x\sqrt{x^2-1}}$

$\frac{d}{dx}(\csc^{-1}{x}) = \frac{-1}{x\sqrt{x^2-1}}$

----
#### Derivative of Sum

$\frac{d}{dx}(u \pm v) = \frac{du}{dx} \pm \frac{dv}{dx}$

$\frac{d}{dx}(u \pm v \pm w \pm \ldots) = \frac{du}{dx} \pm \frac{dv}{dx} \pm \frac{dw}{dx} \pm \ldots$


----
#### Product Rule

$\frac{d}{dx}(u.v)= u.\frac{d}{dx}(v) + v.\frac{d}{dx}(u)$

$\frac{d}{dx}(u.v.w)= u.v.\frac{d}{dx}(w) + v.w.\frac{d}{dx}(u) + w.u.\frac{d}{dx}(v)$

----

##### Quotient Rule

$\frac{d}{dx}(\frac{N}{D}) = \frac{D \times \frac{d}{dx}(N) - N \times \frac{d}{dx}(D)}{D^2}$

N - numerator, D - Denominator

----

##### Chain Rule

Let $y = u^n$, then

$\frac{d}{dx}(y) = \frac{d}{dx}(u^n) = n.u^{n-1}.\frac{du}{dx}$

-----

##### Other Functions
$\frac{d}{dx}(\log_a{x}) = \frac{1}{x}\log_e{a}$

$\frac{d}{dx}(a^x) = a^x.\log_e{a}$

$\frac{d}{dx}(c.y) = c.\frac{dy}{dx}$

-----
##### Implicit Functions

1. Differentitate both sides w.r.t  $x$
2. Take all $\frac{dy}{dx}$ terms on one side and rest on the other.
3. Solve it.
----

##### Parametric Functions

Given,            $x = f(t)$
                      $y = g(t)$

$\frac{dx}{dt} = \frac{d}{dt}(f(t)) = f'(t)$  and $\frac{dy}{dt} = \frac{d}{dt}(g(t)) = g'(t)$

$\frac{dy}{dx} = \frac{dy/dt}{dx/dt} = \frac{g'(t)}{f'(t)}$


# Integrals

$\int{[f(x) \pm g(x)]} = \int{f(x).dx} \pm \int{g(x).dx}$

$\int{K.f(x)dx} = K.\int{f(x).dx} \hspace{2cm} K - real \hspace{0.2cm} number$ 


### Standard Formulae

$\int{x^n.dx} = \frac{x^{n+1}}{n+1} + c \hspace{2cm} n\ne-1$

$\int{dx} = x + c$

$\int{e^x.dx} = e^x + c$

$\int{a^x.dx} = \frac{a^x}{log{a}} + c$

$\int{\frac{1}{x}.dx} = log{|x|} + c$

-----

$\int{1.dx} = x + c$

$\int{x.dx} = \frac{x^2}{2} + c$

$\int{x^2.dx} = \frac{x^3}{3} + c$

$\int{\frac{1}{x}} = \log{|x|} + c$

$\int{\frac{1}{x^2}} = \frac{-1}{x} + c$

$\int{\frac{1}{x^3}} = \frac{1}{2x^2} + c$

$\int{\sqrt{x}.dx} = \frac{2}{3}x^{\frac{3}{2}} + c$

$\int{1}{\sqrt{x}}.dx = \frac{2}{\sqrt{x}} + c$

----

### Trignometric

$\int{\sin{x}.dx} = -\cos{x} + c$

$\int{\cos{x}.dx} = \sin{x} + c$

$\int{\tan{x}.dx} = log{|\sec{x}|} + c$

$\int{\csc{x}.dx} = log{|\csc{x} - \cot{x}|} + c = \log{\tan{\frac{x}{2}}} + c$

$\int{\sec{x}.dx} = \log{|\sec{x} + \tan{x}|} + c = \log{|\tan(\frac{\pi}{4} + \frac{x}{2})|} + c$

$\int{\cot{x}.dx} = \log{|\sin{x}|} + c$

$\int{\sec^2{x}.dx} = \tan{x} + c$

$\int{\csc^2{x}.dx} = -\cot{x} + c$

$\int{\sec{x}.\tan{x}.dx} = \sec{x} + c$

$\int{\csc{x}.\cot{x}.dx} = -\csc{x} + c$

-----

## Inverse Trignometric

$\int{\frac{1}{\sqrt{1-x^2}}.dx} = \sin^{-1}{x} + c$

$\int{\frac{-1}{\sqrt{1-x^2}}.dx} = \cos^{-1}{x} + c$

$\int{\frac{1}{\sqrt{1+x^2}}.dx} = \tan^{-1}{x} + c$

$\int{\frac{-1}{\sqrt{1+x^2}}.dx} = \cot^{-1}{x} + c$s

$\int{\frac{1}{x\sqrt{x^2-1}}.dx} = \sec^{-1}{x} + c$

$\int{\frac{-1}{x\sqrt{x^2-1}}.dx} = \csc^{-1}{x} + c$

-----

### Some Special Functions

$\int{\frac{1}{a^2 - x^2}.dx} = \frac{1}{2a}.\log{|\frac{a+x}{a-x}|} + c$

$\int{\frac{1}{x^2 - a^2}.dx} = \frac{1}{2a}.\log{|\frac{x-a}{x+a}|} + c$

$\int{\frac{1}{x^2 + a^2}.dx} = \frac{1}{a}\tan^{-1}\frac{x}{a} + c \hspace{1cm} or \hspace{1cm} - \frac{1}{a}\cot^{-1}\frac{x}{a} + c$

$\int{\frac{1}{\sqrt{a^2 - x^2}}.dx} = \sin^{-1}{\frac{x}{a}} + c \hspace{1cm} or \hspace{1cm} -\cos^{-1}{\frac{x}{a}} + c$

$\int{\frac{1}{\sqrt{x^2 - a^2}}.dx} = \log{|x + \sqrt{x^2 - a^2}|} + c$

$\int{\frac{1}{\sqrt{x^2 + a^2}}.dx} = \log{|x + \sqrt{x^2 + a^2}|} + c$

$\int{\frac{1}{x\sqrt{x^2 - a^2}}.dx} = \sec^{-1}{\frac{x}{a}} + c \hspace{1cm} or \hspace{1cm} -\frac{1}{a}\csc^{-1}{\frac{x}{a}} + c$

$\int{\sqrt{a^2 - x^2}.dx} = \frac{x}{2}\sqrt{a^2 - x^2} + \frac{a^2}{2}\sin^{-1}{\frac{x}{a}} + c$

$\int{\sqrt{x^2 - a^2}.dx} = \frac{x}{2}\sqrt{x^2 - a^2} - \frac{a^2}{2}\log{|x + \sqrt{x^2 - a^2}|} + c$

$\int{\sqrt{x^2 + a^2}.dx} = \frac{x}{2}\sqrt{x^2 + a^2} - \frac{a^2}{2}\log{|x + \sqrt{x^2 + a^2}|} + c$

---

## Partial Fractions
If the degree in numerator is equal to or greater than denominator, divide it by denominator until the degree becomes less.

$\frac{px \pm q}{(x \pm a)(x \pm b)}, \hspace{0.2cm} a \ne b$                       $\frac{A}{x \pm a} + \frac{B}{x\pm b}$ 

$\frac{px \pm q}{(x \pm a)^2}$                                       $\frac{A}{x \pm a} + \frac{B}{(x\pm a)^2}$


$\frac{px^2 \pm qx \pm r}{(x \pm a)(x \pm b)^2}$                              $\frac{A}{x \pm a} + \frac{B}{x\pm b} + \frac{C}{(x \pm b)^2}$























