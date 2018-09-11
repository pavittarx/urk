<link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/katex@0.10.0-rc.1/dist/katex.min.css" integrity="sha384-D+9gmBxUQogRLqvARvNLmA9hS2x//eK1FhVb9PiU86gmcrBrJAQT8okdJ4LMp2uv" crossorigin="anonymous">

# <center> Basics: Numerical Techniques </center>
## <center> by [pavittarx](https://github.com/pavittrax) </center>

The binary number system is used by most of the computer system. A number system comprising of only 0's and 1's.

There are two kinds of Computer Representations of numbers. 

1. Fixed Point Representation 
2. Floating Point Representation 

## Fixed Point Representation
 * Binary Unsigned Magnitude.
 * Binary Signed Magnitude
 * BCD (Binary Coded Decimal)
 * Excess 3
 * Signed 1's Complement
 * Signed 2's Complement

 [=] A number is different when calculated or represented using a different scheme.

 ## Scientific Notation 

 1. $ 0.05432 = 5.432 \times 10^{-5}  \hspace{25px} (5.432e^{-5}) $

 2. <ktx> 583.246 = 5.83246 \times 10^2 \hspace{25px} (5.83246e^2)</ktx> 

3. <ktx> 5834 \times 10^3 = 5.834 \times 10^6 \hspace{25px} (5.834e^6)</ktx>

4. <ktx> 0.543 \times 10^2 = 5.43 \times 10^1 \hspace{25px} (5.43e^1) </ktx>

## Floating Point Representation
* Only a fixed size (space/bytes) in memory is alloted for representation of a number irrespective of the size of the number.

* Floating point decimal number system are adaptation of scientific notation for computer representation of numbers. <br/>
Leftmost Bit (MSB), which must be either 0 or 1 is interpreted as a sign. <br/>
The base (2 for binary numbers, 10 for decimal numbers) is not explicitly part of representation. 

The two main variations of floating point numbers are - 
1. Sign of the exponent is explicitly included in the representation, as is done in case of mantissa.
2. Sign of Exponent is **not** explicitly included in the representation and is realized implicity through bias (or excess).

As essential ideas about various issues in respect of floating point numbers including error analysis are exactly the same in both the cases. 

### Representation 1: Floating Point Numbers

* +/- are used instead of 0/1.
* There can be any number but fixed number of digits for each mantissa (fractional part). <br/>
Here, 4 digits for mantissa and 2 digits for exponent are being used for the sake of uniformity & sake of explanation.

* The number 10 is adopted as floating point decimal representation and is called the base of floating point number. In scientific notation, 10 is the only base used. 

<ktx> -0.3253 \times 10^{-20} </ktx> will be represented as - 

||d1|d2|d3|d4||e1|e0|
|---:|---:|---:|---:|---:|---:|---:|---:|
|-|3|2|5|3|-|2|0|

Here d1,d2,d3,d4 are digits of mantissa, & e0, e1 are exponents.

[=] <ktx> -0.3253 \times 10^{-20} </ktx> is normalised form, used in representation of computer numbers.

## Normalised Form
The floating point representation is said to be in normalised form if mantissa (m) satisfies <br/>
<center> <ktx> 0.1 \le m \lt 1 </ktx> </center>

m - mantissa , d1d2d3d4

In scientific Notation: <ktx> 1 \le m \lt 10 </ktx> <br/>
Floating Point Representation: <ktx> 0.1 \le m \lt 1 </ktx>

### Why Normalised form? 
* We can have more numbers that can be represented exactly instead of approximately.
* The normalised form gives better approximation of that numbers than can be given by any of the corresponding unnormalised forms.

Example> 243.5 <br/>

1. <ktx> 0.0243 \times 10^4 </ktx> (UnNormalised Form)

||d1|d2|d3|d4||e1|e0|
|---:|---:|---:|---:|---:|---:|---:|---:|
|+|0|2|4|3|+|0|4|

Memory Space is wasted at d1 and an error is introduced of <ktx>0.0005 \times 10^4 </ktx>

2. <ktx>0.0024 \times 10^5</ktx> (UnNormalised Form)

||d1|d2|d3|d4||e1|e0|
|---:|---:|---:|---:|---:|---:|---:|---:|
|+|0|0|2|4|+|0|5|

Memory space wasted at d1 & d2, and error introduced of <ktx>0.000035 \times 10^5</ktx>

3. <ktx>0.2435 \times 10^3</ktx> (Normalised Form)

||d1|d2|d3|d4||e1|e0|
|---:|---:|---:|---:|---:|---:|---:|---:|
|+|2|4|3|5|+|0|3|

In cases (1), (2) 243.5 can not be exactly represented with our 4 digit mantissa. The representation <ktx> 0.2435 \times 10^3 </ktx> is the better approximation than any other form.

## IEEE 754 Floating Point Representation

### Single Precision (32-bits)
The bits are indexed from left to right (order of storage, not index), the rightmost bit has index 0 while the leftmost bit has index of 31.

<center>
<svg height="50px">
  <rect width="500" height="50" style="fill:white;stroke-width:3;stroke:#333333" />
  <line x1="20" x2="20" y1="2" y2="48" style="stroke:#333333;stroke-width:2;" />
  <line x1="150" x2="150" y1="2" y2="48" style="stroke:#333333;stroke-width:2;" />
  <text x="290" y="15" >0</text>
  <text x="154" y="15" >22</text>
  <text x="130" y="15" >23</text>
  <text x="23" y="15" >30</text>
  <text x="3" y="15" >31</text>
  <text x="5" y="35" fill="#333333">S</text>
  <text x="45" y="35" >Exponent (E)</text>
  <text x="190" y="35" >Fraction (F)</text>
</svg>
</center>
<center> 32-bit Floating Point Representation </center>

Base: 2 (Implicit)
Sign: The Most Significant bit (MSB) with index 31, is the sign bit with 

0 - Positive Numbers <br/>
1 - Negative Numbers

Exponent: The next 8-bits with index 30-23 to the right of sign bit (S) are used for Exponent. <br/>
The binary value of exponent lies in between (0-255) both included, but in order to represent to represent negative powers of 2 in the floating point representation *127* is subtracted from the binary value. So that the binary 0 to 255 contribute -127 (represented by 0000 0000) to 127 (represented by 1111 1111) to the value of the power of 2. 

Example> If sequence of 8 bits in the exponent is 1010 1010 with value 170 (128+32+8+2) but contributes to 170-127=43 i.e, the value in mantissa is multiplied by 2<sup>43</sup>.

that is, <ktx>m \times 2^{43}</ktx> not <ktx>m \times 2^{170}</ktx>

**The number 127 is called the bias.**

Mantissa: The IEEE 745 interprets the mantissa differently, the sequence of 23 bits.
 say <ktx>.a_{22}a_{21}a_{20}...a_3a_2a_1</ktx> is interpreted as 
 1.<ktx>.a_{22}a_{21}a_{20}...a_3a_2a_1</ktx> which is the result of <br/>
 1 + <ktx>.a_{22}a_{21}a_{20}...a_3a_2a_1</ktx>

Thus 1 is implicitly assumed withour inclusion in representation.

### Double Precision FLoating Point Numbers (64-bits)
It uses 64 bits instead of 32 bits, for the representation of a number. The bits are indexed from left to right (order of storage not index), the left most bit is indexed 0, while right most bit is indexed 63.

<center>
<svg height="50px">
  <rect width="500" height="50" style="fill:white;stroke-width:3;stroke:#333333" />
  <line x1="20" x2="20" y1="2" y2="48" style="stroke:#333333;stroke-width:2;" />
  <line x1="150" x2="150" y1="2" y2="48" style="stroke:#333333;stroke-width:2;" />
  <text x="290" y="15" >0</text>
  <text x="154" y="15" >51</text>
  <text x="130" y="15" >52</text>
  <text x="23" y="15" >62</text>
  <text x="3" y="15" >63</text>
  <text x="5" y="35" fill="#333333">S</text>
  <text x="45" y="35" >Exponent (E)</text>
  <text x="190" y="35" >Fraction (F)</text>
</svg>
</center>
<center> 64-bit Floating Point Representation </center>

Base: 2 (Implicit)
Sign: The Most Significant Bit (MSB) is sign bit,

0 - Positive Numbers <br/> 
1 - Negative Numbers

Exponent: Next 11 bits, 52-62 to the right of sign bit (S) are for exponent.

Bias: Bias is 1023, as double precision uses 11 bits for exponent.

Fraction/Mantissa: Same as Single Precision.

**Summary**
|Sign Bit| Exponent| Fraction| Bias|
|---|---|---|---|
|1(31)|8(30-23)|23(22-0)|127|
|1(63)|11(62-52)|52(51-0)|1023|


## Floating Point Arithmetic

### Addition 
In floating point addition, sometime numbers are un normalized temporarily and then result is normalized.

Example> <ktx> Let \; x_1=0.4273 \times 10^3 and \; x_2=0.3400 \times 10^2. \; Find \; x_1+x_2</ktx>

Solution: We first make exponents equal by rewriting the number with smaller exponent in unnormalized form.
i.e, <ktx>x_2=0.0340 \times 10^3</ktx> such that both the exponents are equal.
Now, <br/> 
<ktx> 
x_1 + x_2 = (0.4273) \times 10^3 + (0.0340) \times 10^3 \\
\hspace{3.5em} = (0.4273 + 0.0340) \times 10^3 \\
\hspace{3.5em} = (0.46130) \times 10^3 \\
</ktx> 

Using rounding and chopping, we get <ktx>x_1+x_2=0.4613 \times 10^3</ktx> <br/>
The answer should be normalised if it is not already.

### Subtraction
The subtraction is same as adding x<sub>1</sub> and negative of x<sub>2</sub> i.e, <br/>
<ktx>x_1-x_2 = (0.4273 - 0.0340) \times 10^3</ktx>

### Product or Multiplication
*The floating point numbers must be in normalized form for finding the product* 

<ktx>Let \; a=m_1 \times 10^{e_1} \\
\hspace{2em} b=m_2 \times 10^{e_2}</ktx>
are two normalized floating point numbers. Then, <br/>
<ktx> \hspace{2em} c=a \times b = m \times 10^e</ktx>

Start:

<ktx> if(m_1=0 \; or \; m_2=0) \\
\hspace{2em} m=0; \hspace{4em} (c=a \times b =m \times 10^e) \\
\hspace{2em} e=-99; \\ \\ else \\
  \hspace{2em} m = m_1 \times m_2; \\
  \hspace{2em} e=e_1 + e_2;
</ktx>

:End <br/>

The result of the above should be in normalised form, if it is not i.e, <br/> <br/>
<ktx> \hspace{1em} if(|m| \lt 0.1) \\ 
\hspace{2em} m = 10 \times m \\
\hspace{2em} e = e-1 
</ktx>

Example>  To find the product of two numbers 
<ktx>a=0.4031 \times 10^3 \; and \; b=0.3100 \times 10^{-4}</ktx>

We see, <ktx> a \not = 0 \not = b \\
\hspace{2em} m = m_1 \times m_2 \\
\hspace{3em} = (0.4031) \times (-0.3100) \\
\hspace{3em} = -0.12496100 </ktx> (unnormalised form, using 8-bit temporary registers).
<ktx>\hspace{2em} e = (3+(-4)) = -1 </ktx>

Normalising m, using rounding off/chopping, we get <ktx> c = (-0.1250) \times 10^{-1}</ktx>, which is the product of floating point numbers a & b in normalised form.

### Division 
The floating point numbers that are to be divided must be present in normalised form. 

Let, <ktx> a = m_1 \times 10^{e_1} \; and \; b=m_2 \times 10^{e_2}</ktx> are two normalised floating point numbers. Also, <ktx> c = m \times 10^e = a \div b</ktx>. 

Start: <br/>
<ktx> \hspace{2em} if(m_2==0) \\
\hspace{3em} Division \; by \; zero, \; not \; possible. \\
\hspace{2em} if(m_1==0) \\
\hspace{3em} m =0 \\
\hspace{3em} e =-99 \\ \\
\hspace{2em} else \\
\hspace{3em} m = m_1 \div m_2 \\
\hspace{3em} e = e_1-e_2 
</ktx>

The result <ktx>m \times 10^e</ktx> must be in normalised for if not, i.e, <ktx> 1 \le |m| \\
\hspace{3em} m = m \div 10 \\
\hspace{3em} e = e+1 </ktx>

Example> <ktx> Let, \;  a=0.1101 \times 10^3 \; and \; b=-0.3326 \times 10^4. \; Find c=a \div b.</ktx>

We see, <ktx> a \not = 0 \not = b \\
\hspace{2.5em} m=(0.1101) \div (-0.3326) \\
\hspace{2.5em} e=3-(-4)=7 \\ </ktx>

as m<1, no adjustments of m and e are required. On normalisation, m=-0.3611(rounding off) and e=7, we get m=0.3021. <br/>
Therefore, <ktx>c=-0.3021 \times 10^7 </ktx>

## Taylor's Series 
The Taylor's series of a real valued function f(x) that is infinitely differentiable at a real number a, is a power series. *Power series because powers i.e, squares, cubes and higher ones occur in the series.*

Taylor's Series 

<ktx>
f(\alpha) + \dfrac{f'(\alpha)}{1!}(x-\alpha) + 
\dfrac{f''(\alpha)}{2!}(x-a)^2 + 
\dfrac{f^{(3)}(\alpha)}{3!}(x-a)^3 + ...   
</ktx> <br/>

which can be written in compact sigma notation as <br/>

<center>
<ktx>\displaystyle\sum_{n=0}^{\infin} \; 
\dfrac{f^{(n)}(\alpha)}{n!}(x-a)^n</ktx>
</center>

Here, <br/>
<ktx> n! - factorial \; of \;  n, \\
f^{(n)}(\alpha) \; - n^{th} \; derivative \; of \; f, \; evaluated \; at \; \alpha </ktx> 

<b>The derivative of order 0, of f is defined to be f itself, as (x-a)<sup>0</sup>=1, 0!=1,
When <ktx>\alpha = 0</ktx>, it is called MacLaurin Series, which is a special case of Taylor's Series. </b>

<b>Taylor's Series:</b> It is a representation of a function as an infinite sum of terms that are calculated from the values of the function's derivatives at a single point.

<b>Maclaurin Series:</b> If the Taylor's series is centered at zero, than that series is also called Maclaurin's Series.

<b>Taylor Polynomial:</b> A sum of finite number of intial terms of Taylor's series of a function is called a Taylor Polynomial. 

[=] In view of the fact that a computer can calculate sum of only a finite number of terms of a Taylor's series of a function. Taylor Polynomial are used to approximate a function.

An approximation of a function by Taylor's polynomial from the Taylor's series expansion of the function is also a form of <b>truncation</b>. 

The process of approximation of an infinite series(or process) by a finite sub-series(or appropriate finite process) is called Truncation. Given that, it is achieved from finite part of infinite entity, it gives rise to an error called <i>Truncation Error</i>.

## Maclaurin Series 
A taylor's series centered at 0, gives Maclaurin;s series. Thus, the Maclaurin series of a function f(x), obtained by replacing <ktx>\alpha</ktx> by 0 in the above, is given as 

Maclaurin's Series, 

<center> <ktx> f(0) + 
\dfrac{x}{1!}f'(0) +
\dfrac{x^2}{2!}f''(0)+
\dfrac{x^3}{3!}f^{(3)}(0) + ...
</ktx> </center>