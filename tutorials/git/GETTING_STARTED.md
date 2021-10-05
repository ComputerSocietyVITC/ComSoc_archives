# GIT and GITHUB
Hey readers, this markdown file(that's what .md stands for) takes a look at what git is and how it functions and how to "*git started*". 
## What am I going into?
Git is a version control tool which, as the name suggests, is used to control different versions of your product. Git primarily deals with code bases, so that's what we'll be referring to from now onwards.
### Version control is what exactly?
Version control refers to controlling different versions of a document. It is a very important technology when dealing with simultaneous changes in a document. Some smaller implementations of version control are used by Google drive files, but these changes are, more often than not, done in a **live environment**, which we don't *really* want. In the current context, version control is defined as:
Version control, also known as source control, is the **practice of tracking and managing changes to software code**.

### But why do I need Version control?
When working on bigger software projects, which have more than 2-3 members at the very least, the problem of people working on the same code **simultaneously** becomes really apparent. In a normal case, you won't have the facility to view changes made by your co workers and modify your changes accordingly. Even if we do, it becomes a *headache* to then join all the different folders with changes together into a single directory. This is where **Version control** comes in to save the day.

**Multiple people working?** Just make a copy of the directory from the central server to your machine.
**Multiple changes?** Just create a different version/branch for your changes
**Done with changes, want to forward for review?** Create a *request* for the central code maintainer to *pull* your changes into the central base/main branch. Literally known as a *Pull Request*.
**Code breaking changes?** Just put the *Pull Request(PR)* on hold and review the changes and ask the person making the PR to implement said changes. 

So to say, version control makes our life a lot easier and saves out sanity to be later lost to failing test cases.
 
### Where does git enter the picture?
Git is by far the most well known version control tool. Though there are others, Apache subversion and Mercurial, version control has almost become synonymous with git. Git provides us the tools to link our central code server with the different client versions, saving us a lot of code which handles the bulk of the backend merging and change documentation for us. 
 But not to be confused with GitHub, git is only a tool, and is used by many orgs to handle their own version control infrastructure.

### So what is  GitHub?
As mentioned before, `git` connects a central server to clients who want to work on the code. What GitHub provides is a cloud platform to host our own code base. This automatically sets up a git environment and all connection facilities so that we don't have to do it.
 
**GitHub** also provides a very **interactive UI** for users to directly interact with the code **without** any git commands.
Another term associated with GitHub is **Open Source**. **Open-source** software is computer software that is released under a license in which the copyright holder grants users the rights to use, study, change, and distribute the software and its source code to anyone and for any purpose. **Open-source software** may be developed in a collaborative public manner.

That is the **Google version**, but in simpler words, a project is Open Source if its Source is Open for anyone to use, change, distribute or study, hence the name.

## What did we learn?

 - [x] What is Version Control and why to use it
 - [x] What is meant by git
 - [x] What is meant by GitHub
 - [x] How are the two different?
