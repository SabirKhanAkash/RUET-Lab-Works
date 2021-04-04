# Family tree problems solved in prolog 
# (find parent, child, sibling, grandchild, grandparent, ancestor, predecessor)

from pyswip import Prolog
prolog = Prolog()
prolog.consult("prologFamily.pl")

for soln in prolog.query("mother(riya,Y)"):
    print(soln["X"], "is the mother of", soln["Y"])