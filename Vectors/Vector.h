
class Vector{

	int cs;  //current size of array
	int ms;  //max size of the array
	int *arr;     //pointer to an array

public:
	Vector(){
		cs = 0;
		ms = 1;
		arr = new int[ms];
	}

	void push_back(int d){
		if(cs == ms){
			int *oldArr = arr;
			arr = new int[2*ms];
			ms = ms*2;
			for(int i=0; i<cs; i++)
				arr[i] = oldArr[i];

			//clear the old memory
			delete [] oldArr;
		}

		arr[cs] = d;    
		cs++;
	}

	void pop_back(){
		cs--;
	}

	int front() const{
		return arr[0];
	}

	int back() const{
		return arr[cs-1];
	}

	bool empty() const{
		return cs==0;
	}

	int size() const{
		return cs;
	}
	
	int capacity() const{      //made this function const because we r not modifying any data member.
		return ms;
	}

	int at(const int i){
		return arr[i];
	}

	//operator overloading
	int operator[](const int i){
		return arr[i];
	}

};