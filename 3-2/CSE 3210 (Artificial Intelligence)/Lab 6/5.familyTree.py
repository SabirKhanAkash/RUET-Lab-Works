parents_dic={
    'Douglas':['Ben'],
    'Ann':['Ben','Charlie'],
    'Glenn':['Ethan'],
    'Ben':['Ethan','Fancy']
}

child_dic={
    'Ben':['Douglas','Ann'],
    'Charlie':['Ann'],
    'Ethan':['Glenn','Ben'],
    'Fancy':['Ben']

}

grandparent_dic={
    'Douglas':['Ethan','Fancy'],
    'Ann':['Ethan','Fancy']
}

grandchild_dic={
    'Ethan':['Douglas','Ann'],
    'Fancy':['Douglas','Ann']
}

siblings_dic={
    'Ben':['Charlie'],
    'Charlie':['Ben'],
    'Ethan':['Fancy'],
    'Fancy':['Ethan']
}

def parent_of(name):
    if name in parents_dic.keys():
        print(name + " is Parent of: ")
        print(parents_dic[name])
    else:
        print(name+" has no child")

def child_of(name):
    if name in child_dic.keys():
        print(name + " is child of: ")
        print(child_dic[name])
    else:
        print(name+" has no parent")

def grandparent_of(name):
    if name in grandparent_dic.keys():
        print(name + " is GrandParent of: ")
        print(grandparent_dic[name])
    else:
        print(name+" has no grandchild")

def grandchild_of(name):
    if name in grandchild_dic.keys():
        print(name + " is grandchild of: ")
        print(grandchild_dic[name])
    else:
        print(name+" has no grandparent")

def sibling_of(name):
    if name in siblings_dic.keys():
        print(name + " is sibling of: ")
        print(siblings_dic[name])
    else:
        print(name+" has no sibling")



parent_of('Fancy')
parent_of('Ann')
parent_of('Ben')
parent_of('Charlie')
parent_of('Douglas')
parent_of('Ethan')
parent_of('Glenn')

grandparent_of('Fancy')
grandparent_of('Ann')
grandparent_of('Ben')
grandparent_of('Charlie')
grandparent_of('Douglas')
grandparent_of('Ethan')
grandparent_of('Glenn')

grandchild_of('Fancy')
grandchild_of('Ann')
grandchild_of('Ben')
grandchild_of('Charlie')
grandchild_of('Douglas')
grandchild_of('Ethan')
grandchild_of('Glenn')

child_of('Fancy')
child_of('Ann')
child_of('Ben')
child_of('Charlie')
child_of('Douglas')
child_of('Ethan')
child_of('Glenn')

sibling_of('Fancy')
sibling_of('Ann')
sibling_of('Ben')
sibling_of('Charlie')
sibling_of('Douglas')
sibling_of('Ethan')
sibling_of('Glenn')
