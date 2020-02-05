#include <stdio.h>
#include "jerk.h"

$( This is a comment )

fn main() start
	let a equal 3;
	let b equal 2;

	$( Write to stderr )
	ewriteln(An error);

	if a isnt b then
		writeln(a is not b);
	else
		if a is b then
			writeln(a is b);
		else
			writeln(something is very very wrong);
		fi
	fi

	while a greater 0 do
		writeln(another);
		a--;
	end

	for i = 0; i lesser 5; inc(i) do
		printf("%d\n", i);
	end

	match a do
	case 1:
		write(a is 1);
		escape;
	default:
		writeln(No though);
		escape;
	end
end
