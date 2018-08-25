## Coding Conventions (to maintain consitency among projects)

1. All variable names should be meaningful.

2. The variable names should use camelCase.

3. CSS class names should use hyphens/dashes (-) i.e, class-name.

4. All the constants should use underscores ( _ ) Ex, _thisIsAConstant.

5. In javascript, use of `let` & `const` is enforced, while `var` is strictly prohibited.

6. All the code should be properly indented.

7. Use of tabs is strictly prohibited, use 4 spaces instead.

8. Spaces should not be present with parenthesis, and before semicolons/commas.

```
❌ for (int i=0;i<10;i++)
❌ for( int i=0;i<10;i++ )
❌ for(int i=0 ;i<10 ;i++)
❌ for(int i=0;i<n;i++) {
✔ for(int i=0;i<10;i++){
✔ for(int i=0; i<10; i++){
```

9. A single line of code should not be greater than 80 characters. If it is so, break the line into multiple lines.

10. The code components/modules must have comments included.

11. Code is written using compact braces. *Note the opening brace.*

```
if(condition){
    // the code comes in here
}
```

12. Seprate complex calculation statements using parenthesis or with the use of variables.

```
let x = a+b+c/z;

should be written as 

let x = (a+b+c)/z;

```
