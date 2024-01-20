#include <iostream>
#include <thread>
#include <chrono>
#include <string>

void Boot(){
       	
       	int seconds_to_wait = 6;
       	       	std::cout<<"Loading system..."<<std::endl;
       	
       	std::chrono::milliseconds duration(seconds_to_wait * 1000);
       	
       	std::this_thread::sleep_for(duration);
       	
       	std::cout<<"Loading Complete!"<<std::endl; 
       	std::cout<<std::endl;
       	
}

void InsTall(){
	        	
	        	int seconds_to_wait = 3;
       	
       	std::cout<<"Installing Required files..."<<std::endl;
       	
       	std::chrono::milliseconds duration(seconds_to_wait * 1000);
       	
       	std::this_thread::sleep_for(duration);
       	
       	std::cout<<"Files Installed!"<<std::endl;
       	 
}

void CpuDet(){
	       
	       std::cout<<"CPU name: BRUMSKY Emurb 1-1000M."<<std::endl;
	       std::cout<<"CPU Micro-Architecture: BMA1."<<std::endl;
	       std::cout<<"CPU Architecture: ARM."<<std::endl;
	       std::cout<<"CPU cores: 16(6P 10E)."<<std::endl;
	       std::cout<<"CPU Manufacturer: BRUMAX STUDIO."<<std::endl;
	       std::cout<<std::endl;
	       
}
int main(){
	    
	    Boot();
	    std::cout<<std::endl;
	    
	   InsTall();
	   std::cout<<std::endl;
	   
	   std::string user = "User";
	   std::cout<<"Welcome, "<<user<<"!"<<std::endl;
	   std::cout<<std::endl;
	   
	   std::string usr; 
	   std::cout<<"Do you wish to see details about this CPU or go straight to using this system? Type \"yes\" or \"no\": ";
	   
	   std::cin>>usr;
	   
	   while(usr != "yes" && usr != "no"){
	   	         std::cout<<"Didn\'t get that, try again: ";
	   	         std::cin>>usr;
	   }
	   
	   std::cout<<std::endl;
	   
	   if(usr == "no"){
	   	  Boot();
	   	  return 0;
	   }
	   else if(usr == "yes"){
	   	     InsTall();
	   	     CpuDet();
	   }
	   
	    return 0;
}