#include <iostream> 	// input/output functionality
#include <math.h> 		// the sine function
#include <stdlib.h> 	// the atof function

using namespace std;

int main (int argc, char* argv[])
{
		// convert the text argv[1] to double using atof:
	//double r = atof(argv[1]);
	double r;
	double start;
	double end;
	double inc;
	
	if(argc<=3) 
	{		printf("usage: not enough input (start, end, inc)");
			cout<<	argv[0]<<	endl;
			exit(1);
	}
	else 
	{	start = atof(argv[1]);
		end = atof(argv[2]);
		inc = atof(argv[3]);	
	}	// declare variables wherever needed:

	cout << "\n\n\t\t-------Hello, World!------------"<<endl;

	for(r=start;r<=end;r=r+inc)
	{	cout<< "\tSin("<< r <<") = "<< sin(r) << endl;
		//cout<< sin(" << r << ")=" << r << '\n'";
	}
	return 0; 	/* success */
}
