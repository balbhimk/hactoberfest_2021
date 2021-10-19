import copy

animals = {
    "lion": "scary",
    "lion2": "scary2",
    "lion3": ["scary3"],
}

#perform a shallow copy
things = animals.copy()

#perform a deep copy
# things =  copy.deepcopy(animals)

# animals["lion3"] = "toy"
print(id(things["lion3"]), (things["lion3"]))
print(id(animals["lion3"]), (animals["lion3"]))

things["lion3"].append("toy")
print((things["lion3"]))
print((animals["lion3"]))