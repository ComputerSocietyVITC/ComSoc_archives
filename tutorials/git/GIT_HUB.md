# GitHub <a href="https://github.com/"><img src = "https://upload.wikimedia.org/wikipedia/commons/thumb/9/91/Octicons-mark-github.svg/2048px-Octicons-mark-github.svg.png"  alt ="github" width = 25/></a>
GitHub the go to for open source, the primary dev-ops tool, the crown on your already impressive resume or the singular redeeming factor in a normally lack-luster one. We will take a look at the GitHub UI in more detail. I do hope you have taken a look at the Getting Started document as we will be referencing many concepts talked about there.

Getting that out of the way, lets get started...
## Account (wait we're gonna start there?) 
Yeah we are, so for those of you that haven't created an account, though I assume you have, since you are reading this document on GitHub, but I digress.
You can sign up using your personal email or your student email. Chances are you will get a **PRO** subscription with your student email. 

But a smarter move is to create an account with your personal account, add **secondary email** as your **student email** and then sign up for the [GitHub Student Developer Pack ](https://education.github.com/pack).
<p><img src="https://i.kym-cdn.com/photos/images/newsfeed/001/515/694/3b5.jpg" width=450/></p>

## Looking at the UI now
Now that we have a account that we access GitHub from, lets look at what features are now available from the UI. 
GitHub UI:
<p><img src="https://github.com/ComputerSocietyVITC/ComSoc_archives/blob/main/tutorials/git/assests/github_toolbar.JPG" width=500/></p>

Looking from left to right:
The first is the github logo(wow didn't know that didya), which can redirect you to the home page. The next is the search bar, which allows you to search anything from the whole GitHub public server, very usefull tool.
Then are the sections labelled
- Pull Requests
- Issues
- Marketplace
- Explore

We'll be only looking at the first two, the other are to be explored by you. As the name suggests, the first two contain a list of all Pull Requests and issues created or starred by you.

Then at the extreme right, are the following:
- **alarms**: from all your subscribed users, repos, issues, PRs, etc.
- **+ (create)**: What you can create basically
  <p><img src="https://github.com/ComputerSocietyVITC/ComSoc_archives/blob/main/tutorials/git/assests/create.JPG" width=100/></p>
- **Profile**: Your user profile

## Repositories
The majority of work on GitHub is done on Repositories or Repos. So what are Repos? In simple terms, we can visualize repos as directories which are allocated to use to store different versions of our main code.
<p><img src="https://github.com/ComputerSocietyVITC/ComSoc_archives/blob/main/tutorials/git/assests/repos.JPG" width=100/></p>

### Branches
Repositories, contain sub-directories called branches which actually contain our code. The branches are a little more structured than a normal directory. They are, as the name suggests, a branch of our default branch(by default named `main` or `master`), which can be changed.

But similar to normal directories, they are a copy of the default directory, but after that become completely independant of any changes made in the default directory or any changes made in the directory itself.

### Repo Components
<p><img src="https://github.com/ComputerSocietyVITC/ComSoc_archives/blob/main/tutorials/git/assests/repo_comps.JPG" width=500/></p>

The components are mostly self explanatory,
- **code** contains the code
- **Issues** the issues
- **Pull Requests** the Pull Requests
  
You can explore the rest of the settings by yourself.

Coming down and going from left-right, we can see
- **main** which is the branch name which we are currently looking at, we can click on it and select different branches to look at from the resulting dropdown
- **2 branches** shows the number of branches
- **tags**
- **Go to file** is a in-repo search option
- **Add file**
- **Code** the most important option, this allows us to connect the online Repo on the GitHub cloud to our local system. Clicking on it, provides us with a url with is used to link our local version to GitHub repo.

## Wait, that's it?
Yep, believe it or not, that's all you need to know to get started on basic open source. To look at more advanced options, you can take a look at the git documentation of course, but this is enough for anyone who wants to get started.
