import pickle

data = {
    "name": "Renil",
    "age": 20
}

file = open("data.pkl", "wb")
pickle.dump(data, file)
file.close()

file = open("data.pkl", "rb")
data = pickle.load(file)
file.close()
print(data)

print("Data saved successfully")