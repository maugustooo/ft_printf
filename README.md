# ft_printf
My version of the printf function

## General notes

### Functions from <stdarg.h>

Function | Format | Description
--- | --- | ---
va_start | `void	va_start(va_list ap, param)` | Starts argument list ap, applied to param
va_arg | `type	va_arg(va_list ap, type)` | Defines type for an argument, saves in respective variable
va_end | `void	va_end(va_list ap)` | Ends argument list ap
va_copy | `void	va_copy(va_list dest, va_list src)` | Copies list from src to dest (both must then be ended)

### Conversion and Flags

Conversion | Description
--- | ---
%c | Single character
%s | String
%p | Pointer (hexadecimal format)
%d | Integer (decimal)
%i | Integer (base 10)
%u | Unsigned decimal number
%x | Integer (base 16, lower case)
%X | Integer (base 16, upper case)
%% | Just the percent sign

Flag | (WIP) Compatible with | Description
--- | --- | ---
%[number] | all | Print result [number] spaces to the right
%-[number] | all | Print result formatted to the left. Returns same result as without the '-'
%0[number] | %d, %i, %u, %x, %X | Print result after [number] zeros
%.[number] | %d, %i, %u, %x, %X | Print result ensuring that [number] characters were printed. Fill the rest with zeros, if needed
%# | %x, %X | Prints result prefixed by 0x or 0X
%+ | %d, %i, %u, %x, %X | Prints positive numbers prefixed by '+', or negative numbers prefixed by '-'
%[space] | %d, %i, %u, %x, %X | Prints positive numbers prefixed by ' ', or negative numbers prefixed by '-'

## Functions

Function
--- | --- | ---
ft_putchar
ft_putstr 
ft_printnbr
ft_strlen
ft_putpointer
ft_itoa/ft_uitoa
