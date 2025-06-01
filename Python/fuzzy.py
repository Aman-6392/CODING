# Define fuzzy sets as dictionaries
# Keys represent elements, values represent membership degrees

fuzzy_set_A = {"x1": 0.2, "x2": 0.5, "x3": 0.7}
fuzzy_set_B = {"x1": 0.6, "x2": 0.3, "x3": 0.8}

# Function to compute the union of two fuzzy sets
def fuzzy_union(set_A, set_B):
    union_result = {}
    for key in set_A:
        union_result[key] = max(set_A.get(key, 0), set_B.get(key, 0))
    return union_result

# Function to compute the intersection of two fuzzy sets
def fuzzy_intersection(set_A, set_B):
    intersection_result = {}
    for key in set_A:
        intersection_result[key] = min(set_A.get(key, 0), set_B.get(key, 0))
    return intersection_result

# Function to compute the complement of a fuzzy set
def fuzzy_complement(fuzzy_set):
    complement_result = {key: 1 - value for key, value in fuzzy_set.items()}
    return complement_result

# Perform operations
union_result = fuzzy_union(fuzzy_set_A, fuzzy_set_B)
intersection_result = fuzzy_intersection(fuzzy_set_A, fuzzy_set_B)
complement_A = fuzzy_complement(fuzzy_set_A)
complement_B = fuzzy_complement(fuzzy_set_B)

# Display results
print("Fuzzy Set A:", fuzzy_set_A)
print("Fuzzy Set B:", fuzzy_set_B)
print("\nUnion of A and B:", union_result)
print("Intersection of A and B:", intersection_result)
print("\nComplement of A:", complement_A)
print("Complement of B:", complement_B)
