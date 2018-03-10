# doub

A CLI for running [Doubscript](https://github.com/mcwhittemore/doubscript) programs.

`doub ./script/double.doub 7`

The above runs a user script found at `./script/double.doub` and passes 7 to the first arguments of `main`.

Here is [an example](https://github.com/mcwhittemore/doubscript/blob/master/scripts/double.doub) of what that script might look like.

```
main:input // define a function that accepts one input
  print(input) // write "input: _val_of_input_" to stdout
  doubd=input*2 // multiply input by two and assign result to doubled
  print(doubd) // write "doubd: _val_of_doubd_" to stdout
```
