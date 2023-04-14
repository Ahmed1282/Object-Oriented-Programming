//Muhammad Ahmed Baig_20i-1884_Section F_Assignment 4_Q2
#include<iostream>
#include<string>
using namespace std;

#ifndef Project_H
#define Project_H

class Project
{
	private:
    	
		int project_ID;
    	string project_details;

	public:
    	
		Project();
    	Project(int projectID, string projectdetails);
    	int getProjectId();
    	string getProjectDetails();
    	void setProjectId(int projectID);
    	void setProjectDetails(string projectdetails);
    	string showDetails();
};

#endif
