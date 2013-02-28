#include <iostream>
#include <string>
#include <fstream>

using namespace std;


	string fileName = "";
	string test = "";
	string stringsave="";

	bool A();
	bool E();
	bool T();
	bool F();
	bool P();
	bool U();
	bool I();
	bool L();

	

	bool A(){
		
		
		
		if(I()){
			
			
			if(test[0] == '='){
				
				test = test.substr(1);
				
				if(E()){
					
					return true;
					
				}
				
			}
			
		}

		

		return false;

	}

	bool E(){   
		
		

		if(T()){
			
			
			
			if(test[0] == '+' || test[0] == '-'){
				
				test = test.substr(1);
				
				if(E()){
					
					
					
					return true;
					
				}
				
			}
			
			return true;
		}
		

		return false;

	}

	bool T(){  
		
		

		if(F()){
			
			
			
			if(test[0] == '*' || test[0] == '/'){
				
				test = test.substr(1);
				
				if(T()){
					
					
					
					return true;
					
				}
				
			}
			
			return true;
			
		}
		

		return false;

	}

	bool F(){	
		
		

		if(P()){
			
			
			
			
			if(test[0] == '^'){
				
				test = test.substr(1);
				
				if(F()){
					
					
					
					return true;
					
				}
				
			}
			
			return true;
			
		}
		
		

		return false;

	}

	bool P(){  
		
		
		
		if(I()){
			
			
			
			return true;
			
		}
		else if(L()){
			
			
			
			return true;
			
		}
		else if(U()){
			
			
			
			if(I() || L()){
				
				
				
				return true;
				
			}
			
		}
		else if(test[0] == '('){
			
			test = test.substr(1);
			
			if(E()){
				
				
				
				if(test[0] == ')'){
					
					test = test.substr(1);
					
					return true;
					
				}
				
				
			}
			
			
		}

		

		return false;

	}

	bool U(){
		
		
		
		if(test[0] == '+' || test[0] == '-' || test[0] == '!'){
			
			test = test.substr(1);
			
			return true;
			
		}

		return false;

	}

	bool I(){
		
		
		
		if(test[0] >= 'a' && test[0] <= 'z'){
			
			test = test.substr(1);
			
			
			return true;	
			
		}

		

		return false;

	}

	bool L(){
		
		



		if(test[0] >= '0' && test[0] <= '9'){
			
				test = test.substr(1);
				return true;
			
		}

		

		return false;

	}

	

	int main(int argc, char* argv[]){


				


					fileName = argv[1];

					ifstream fin(fileName.c_str());

					cout<<endl;

					while (fin >> test) {

							stringsave = test;

							if (A() && test =="") {

								cout<<"The string  \""<<stringsave<<"\"  is in the language."<<endl;

							}

							else {

								cout<<"The string  \""<<stringsave<<"\"  is not in the language."<<endl;

							}
						
					}

					
				       cout<<endl;	




				fin.close();

				return 0;


	
}
