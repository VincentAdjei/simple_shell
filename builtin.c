#include "shell.h"

int _myexit(info_t *info)
{
    int exitcheck;

    if (info->argv[1]) /* If there is an exit argument */
    {
        exitcheck = _erratoi(info->argv[1]);
        if (exitcheck == -1)
        {
            info->status = 2;
            print_error(info, "Illegal number: ");
            _eputs(info->argv[1]);
            _eputchar('\n');
            return 1;
        }
        info->err_num = _erratoi(info->argv[1]);
        return -2;
    }
    info->err_num = -1;
    return -2;
}

int _mycd(info_t *info)
{
    char *s, *dir, buffer[1024];
    int chdir_ret;

    s = getcwd(buffer, 1024);
    if (!s)
        _puts("TODO: >>getcwd failure emsg here<<\n");
    if (!info->argv[1])
    {
        dir = _getenv(info, "HOME=");
        if (!dir)
            chdir_ret = chdir((dir = _getenv(info, "PWD=")) ? dir : "/");
        else
            chdir_ret = chdir(dir);
    }
    else if (_strcmp(info->argv[1], "-") == 0)
    {
        if (!_getenv(info, "OLDPWD="))
        {
            _puts(s);
            _putchar('\n');
            return 1;
        }
        _puts(_getenv(info, "OLDPWD="));
        _putchar('\n');
        return 1;
    }
    else
    {
        dir = info->argv[1];
        chdir_ret = chdir(dir);
    }

    if (chdir_ret == -1)
    {
        print_error(info, dir);
        _putchar('\n');
    }
    else
    {
        _setenv(info, "OLDPWD", s);
        _setenv(info, "PWD", getcwd(buffer, 1024));
    }
	return (1);
}
