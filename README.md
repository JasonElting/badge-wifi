# DCG 937 Bade wifi 
## setup
### install VS Code
`sudo apt install code`
or 
`sudo yum install code`

vscode uses the platformio exentsion to donwload the needed libaries and build/upload code to the esp32.

### clone repo
you can clone this repo locally using `git clone http://lemeure.com:3000/local/badge-wifi.git`

### open repo in code
run `code badge-wifi` where you cloned the repo to.

### install platformio
there should be a notification in the lower right saying this repo reccomneds platformio, and you should install it.
if not you can search platformio in the exntesnions and install it that way

### platformio builds
you should now see a little alien icon on the left below the extensions button, click that and it will show you the options for building, uploading, etc.
click build to build, upload to upload, etc.

the dependencies should be auto decteded and downloaded, this might take a few mins, check the terminal to be sure when its done.