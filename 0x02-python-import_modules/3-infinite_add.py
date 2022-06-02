#!/usr/bin/python3
if __name__ == "__main__":
    import sys
    argresult = 0
    for i in range(1, len(sys.argv)):
        argresult += int(sys.argv[i])
    print("{}".format(argresult))
