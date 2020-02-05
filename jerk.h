/// Flow
#define if if(
#define then ){
#define else } else {
#define fi }

#define for for(int
#define while while(
#define do ){
#define end }

#define start {
#define fn int

/// Vars
typedef void* let;

/// Operators
#define and &&
#define or ||
#define not !
#define is ==
#define isnt !=

#define equal =
#define plus +
#define minus -
#define times *
#define over /
#define greater >
#define lesser <

/// Functions
#define Main(x) int main() { ##x }

#define write(x) fprintf(stdout, "%s", #x);
#define writeln(x) fprintf(stdout, "%s\n", #x);
#define ewrite(x) fprintf(stderr, "%s", #x);
#define ewriteln(x) fprintf(stderr, "%s\n", #x);

/// Comments
#define $(...) ;

/// Math
#define inc(x) x++
#define dec(x) x--

/// Misc
#define escape break
#define match switch((int)

