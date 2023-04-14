//Muhammad Ahmed Baig_20i-1884_Section F_Assignment 4_Q2
#include<iostream>
#include<cstring>
#include<string>
#include"Project.h"
#include<string>
using namespace std;

	Project::Project()
    {

    }

    Project::Project(int projectID, string projectdetails)
    {
        project_ID = projectID;
        project_details = projectdetails;
    }

    int Project::getProjectId()
    {
        return project_ID;
    }

    string Project::getProjectDetails()
    {
        return project_details;
    }

    void Project::setProjectId(int projectID)
    {
        if (projectID >= 1)
        {
            project_ID = projectID;
        }
        else
        {
            cout<<"The ID cannot be less than 1"<<endl;
        }
    }

    void Project::setProjectDetails(string projectdetails)
    {
        project_details = projectdetails;
    }

    string Project::showDetails()
    {
        string details1, details2, details3;
        details1 = "" + to_string(getProjectId());
        details2 = "," + getProjectDetails();
        details3 = details1 + details2;
        return details3;
    }
