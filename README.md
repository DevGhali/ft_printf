<h1 align="center">ft_printf - because ft_putnbr() and ft_putstr() aren’t enough 😁</h1>
</br>

In this project we mimic the original printf() function.
</br>
<img align="right" src="https://user-images.githubusercontent.com/113459534/219955883-79263933-b1b7-4578-b340-a6ac161dcc04.jpeg"/>

its job is to output formatted data to the stdout [more information on stdout (Standard Output Stream)](https://en.cppreference.com/w/cpp/io/c/std_streams) </br>
👇👇👇 Here is an example usage of the function 👇👇👇

<img src= "https://user-images.githubusercontent.com/113459534/219958739-4b4c9b64-528b-4d4e-b80b-aaff5698d902.png" width="600" height="150"/>

## Ever imagined how printf works❓lets dive in... 🏊‍♂️

- In this project we learn how to use Variadic Arguments or an amazing feature called "Ellipsis".
this feature allows us to pass an unfixed amount of arguments to the function.

> The prototype of ft_printf() is :

```c
int ft_printf(const char *, ...);
```
in the prototype we can see the usage of the so-called Ellipsis by using the 3 dots (...) [(more information on Variadic Arguments)](https://en.cppreference.com/w/cpp/language/variadic_arguments#:~:text=Allows%20a%20function%20to%20accept,list%20of%20a%20function%20declaration.)
</br>
</br>
- The function can optionaly contain embedded "format specifiers" that are replaced by the values specified in subsequent additional arguments and formatted as requested.

> A format specifier follows this prototype :

``%[flags][width][.precision][length]specifier``

In this project we only handle the following conversions: ``cspdiuxX%``
[(more information on format specifiers)](https://cplusplus.com/reference/cstdio/printf/)

## Usage

Compile the code using -> ``make all``

of course we would need a main function, either write one inside the ``ft_printf.c`` file or by creating a main file ``main.c``

```c
int main(void)
{
      // Call the function
      ft_printf("Testing!!");
      return (0);
}
```
Compile the library that was created earlier with the ``main.c`` :

```bash
gcc main.c libftprintf.a
```
Run the program :
```bash
./a.out
```
Output should be : 
```
Testing!
```
## Have you seen what printf can do ❓😯
<img src= "https://user-images.githubusercontent.com/113459534/220216680-ccfe50d5-5172-4f23-a72d-5e13e6c5b22c.jpeg" width="500" height="500"/>
