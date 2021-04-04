#    Here is a Python list of restriction site patterns
#    restriction_sites = [
#      "GAATTC",    # EcoRI
#      "GGATCC",    # BamHI
#      "AAGCTT",    # HindIII
#    ]

#    Write a program that prints each pattern.
#    GAATTC is a restriction site
#    GGATCC is a restriction site
#    AAGCTT is a restriction site

restriction_sites = [
    "GAATTC",   # EcoRI
    "GGATCC",   # BamHI
    "AAGCTT",   # HinDIII
]

for sites in restriction_sites:
    print(sites, "is a restrictable site")