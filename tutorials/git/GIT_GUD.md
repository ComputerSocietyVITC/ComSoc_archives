# GIT
Hey readers, yet again I will try, to the best of my ability, try to dumb down version control with the **git CLI**. I am assuming that you have read the Getting Started and GitHub document to get an idea of the terminologies I will be using in this one. 
If not, then go read them first, I'll wait...

...Ok I am assuming you have read them by now, lets get started then.

## Installing git
Just go to [Git (git-scm.com)](https://git-scm.com/) and download git from there and install the file.
#### Setting it up
After installation, you will have a `git bash` terminal, alternatively you can also use your system terminal/command prompt. 
I will be using windows, but the commands are the same for any system.
So first set of commands you need to run are:
`git config --global user.name <your_username>`
`git config --global user.email <your_email>`
Remember to remove the <> braces while inputting your username and email. This will let git know who is making changes.

For the sake of this tutorial, I'll be using the repository [git tutorial](https://github.com/ComputerSocietyVITC/git_tutorial). 
Now you need to just navigate to the link and click on the fork option, this will create an identical copy of the repository whose owner will be you.
<img src="./assests/fork.jpg" width=200/>
As you can see, this repo has already from another repo whose owner is shown as `cool-pants`.

#### Clone
So the first thing now you need to do is clone a repo to start working on it. How to clone you ask? Just click on the **code** option we talked about before. 
<img src="./assests/clone.jpg" width=200/>
Now just copy the url shown here. This will be the url which will allow us to set up a link, or **remote** as is known in git.

Now we switch to our terminal and local directory. Just navigate to any directory where you want the entire code to be. Once in that directory from in the terminal, run the following set of commands:
- `git init` initializes the directory for git
- `git remote add origin <paste_url>` creates a remote named origin which references the url you copied+pasted from GitHub
- `git pull origin master` pulls the master branch from the remote called origin and saves everything on the branch on your local system

And voila your local directory is now a linked copy to your GitHub directory. 

#### Committing changes
You forked a repo, made a copy of the forked repo. You made some changes to it, now what? Well now you add the changes to your fork.
To do that, you run the following commands.
`git add <address_of_changed_files_space_separated>`
Ex: for 2 files in folder1/folder2/file.txt and folder3/pyfile.py from source directory, you run
`git add folder1/folder2/file.txt folder3/pyfile.py`
Commit the changes using
`git commit -m "<your_message_here>"`
After committing, just push the changes to your GitHub repo
`git push origin master`
Pushes changes to **master branch** on the **remote** referenced by **origin**

#### Changing Branches
Well we saw how to add changes to the **main/master branch** but what if we want to add them to another branch?

Well that is pretty simple, just run the following command before pushing the changes, but after committing them.
`git checkout -b <branch_name>` switches to another branch named <branch_name>. 
Well you must be thinking, **"Why after committing them?"** Well that, you see my friend, is because switching branches resets our working tree, whereas committing changes adds everything to the working stream and is not affected by tree changes. And we don't want to lose any of our work.

After that just follow the steps in **Committing changes**, switch to **<branch_name>**, just change the final **push** statement to
`git push origin <branch_name>`

#### Pull Requests
Now after you make changes, just follow the following steps:
- **Branch push**: navigate to the master branch of the fork, you will see a compare and pull request option as below 
<img src="./assests/pr.jpg" width=300/>
Just click on it and follow the steps, to create your very first PR. If you scroll to the bottom of the PR, you can see the option of merge and close.
<img src="./assests/merge.jpg" width=300/>
Uptill the point, this PR is closed or merged, any **changes/commits** to the branch **<branch_name>** will be added to the PR. Thus normally a new branch is created for every new PR.

- **Fork push**: similarly changes to a fork, also give you the option to create a PR for the main repo. The steps are similar to those for the **Branch Pushes**