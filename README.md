<div align="center">

<h1> ft_printf - 42 Wolfsburg </h1>

<a href="https://github.com/simon-zerisenay/42-ft_printf">![42 Badge](https://github.com/mcombeau/mcombeau/blob/main/42_badges/ft_printfm.png)</a>

</div> 
<label>   
	<h2> Score </h2>	 
	<img alt="100" style="width: 100px;height: 70px" src="https://github.com/simon-zerisenay/simon-zerisenay/blob/main/100.png"/>
</label> 
  
<h2> Introduction </h2> 
<p align="center">
	<img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/simon-zerisenay/42-ft_printf?color=lightblue" />
	<img alt="Number of lines of code" src="https://img.shields.io/tokei/lines/github/simon-zerisenay/42-ft_printf?color=critical" />
	<img alt="Code language count" src="https://img.shields.io/github/languages/count/simon-zerisenay/42-ft_printf?color=yellow" />
	<img alt="GitHub top language" src="https://img.shields.io/github/languages/top/simon-zerisenay/42-ft_printf?color=blue" />
	
</p> 
Welcome to the ft_printf project! This project is part of the curriculum at 42 Wolfsburg and aims to develop your understanding of variadic functions and string formatting in the C programming language. ft_printf is a custom implementation of the printf function, which allows for formatted output to the standard output stream.
 
<h2> Objective </h2>
The main objective of this project is to recreate the printf function, providing similar functionality and behavior. By building your own version of printf, you will deepen your understanding of the inner workings of the function and gain hands-on experience in string manipulation, handling format specifiers, and managing variadic arguments.

<h2> Features </h2>
<h4> Format Specifiers </h4>
The ft_printf function supports a wide range of format specifiers, allowing you to format and print various types of data. Some of the commonly used format specifiers include:
<br/>
<br/>
<div align="center">
%c: Character <br/>
%s: String <br/>
%d or %i: Signed decimal integer <br/>
%u: Unsigned decimal integer <br/>
%x or %X: Unsigned hexadecimal integer <br/>
%f: Floating-point number <br/>
%p: Pointer address <br/>
</div>
<br/>
<br/>
These format specifiers enable you to print data in a specific format, making it easier to display and interpret different types of information.

Width and Precision
You can specify the width and precision of the output using optional flags in the format specifier. The width determines the minimum number of characters to be printed, while the precision specifies the maximum number of characters to be printed for strings or the number of decimal places for floating-point numbers.

Flags and Modifiers
The ft_printf function supports various flags and modifiers to customize the output. Some of the commonly used flags include:
<br/>
<div align="center">
-: Left-justify the output
+: Prepend a plus sign to positive numbers
0: Pad the output with zeros
#: Add the "0x" or "0X" prefix for hexadecimal values
</div>
<br/>
	These flags and modifiers allow you to modify the appearance of the output to meet your specific requirements.

<h2> Variadic Argument Handling </h2>
<br/>
One of the key aspects of ft_printf is its ability to handle variadic arguments. By utilizing the stdarg.h header and the va_list type, you can process a variable number of arguments passed to the function. This flexibility enables you to handle different types of data and dynamically generate the output based on the provided format specifiers.

<h2> Installation and Usage </h2>
<br/>
To use ft_printf in your project, follow these steps:

<h2> How it Works </h2>
<br/>
The ft_printf function follows a systematic process to handle the provided format string and corresponding arguments:

Parse the format string and identify format specifiers, flags, width, precision, and modifiers.
Retrieve the arguments based on the format specifiers and perform necessary data conversions.
Generate the formatted output according to the specified format and desired appearance.
Print the final output to the standard output stream.
<br/>
By following this process, ft_printf ensures accurate formatting and printing of the provided data, mimicking the behavior of the standard printf function in C while providing a reliable and versatile tool for formatted output in various applications.

