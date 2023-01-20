# SSH setup for GitHub

When you interact with your remote repository hosted GitHub on the command line, you will be required to authenticate. The newest way to do this is with [personal access tokens](https://docs.github.com/en/github/authenticating-to-github/keeping-your-account-and-data-secure/creating-a-personal-access-token) over HTTPS. An alternative is to use [SSH to connect](https://docs.github.com/en/github/authenticating-to-github/connecting-to-github-with-ssh). Follow these steps to set this up.

## 1. Generate an SSH key

If you don't already have one you will have to generate an SSH key. You do this on the command line (WSL for Windows users).

```bash
ssh-keygen -t ed25519 -C "YOUR_EMAIL@example.com"
```

You will be asked to confirm the location in which the files will be placed. The default value should be acceptable.

You will then be prompted to enter a passphrase and then confirm it. You should enter a passphrase that you won't mind typing repeatedly because you will be asked for this passphrase when you use your key. If you don't enter something and hit enter, you will never be asked for a passphrase -- but this also means that your key will be saved on your computer in unencrypted plain text, which is not secure!

## 2. Add the key to ssh-agent

Adding the key to ssh-agent will ensure that your key is used when you communicate via SSH. First, make sure that ssh-agent is running.

```bash
eval "$(ssh-agent -s)"
```

Then add your key with the following command.

```bash
ssh-add ~/.ssh/id_ed25519
```

## 3. Paste the public key at GitHub

Print your public key on the command line so you can copy it.

```bash
cat ~/.ssh/id_ed25519.pub
```

Then go to [the page on GitHub for adding a new key](https://github.com/settings/ssh/new) and paste your key into the textarea. You should also give your key a title and then click the **Add SSH key** button.

## 4. Test that it works

Please follow [these instructions](https://docs.github.com/en/authentication/connecting-to-github-with-ssh/testing-your-ssh-connection) to test if your SSH key has been set up correctly. If it hasn't, please get help from a teacher.