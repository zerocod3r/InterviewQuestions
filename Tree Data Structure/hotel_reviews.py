# Given a set of reviews provided by the customers for different hotels and a string containing Good Words, you need to sort the reviews in descending order according to their Goodness Value (Higher goodness value first). We define the Goodness Value of a string as the number of Good Words in that string.

# NOTE: Sorting should be stable. If review i and review j have the same Goodness Value then their original order would be preserved.

# You are expected to use Trie in an Interview for such problems

# Example Input
# Input 1:

#  A = "cool_ice_wifi"
#  B = ["water_is_cool", "cold_ice_drink", "cool_wifi_speed"]


# Example Output
# Output 1:

#  [2, 0, 1]


# Example Explanation
# Explanation 1:

#  sorted reviews are ["cool_wifi_speed", "water_is_cool", "cold_ice_drink"]



class Trie:

    def __init__(self):
        self.letters = {}
    
    def insert(self, string):
        letters = self.letters
        for word in string:
            if word not in letters:
                letters[word] = {}
            letters = letters[word]
        
        letters["*"] = True #end of string
    
    def search(self, string):
        letters = self.letters
        for word in string:
            if word not in letters:
                return False
            letters = letters[word]
        
        if "*" in letters:
            return True
        return False


class Solution:
	# @param A : string
	# @param B : list of strings
	# @return a list of integers
	def solve(self, A, B):
        keywords = A.split('_')
        trie = Trie()

        for word in keywords:
            trie.insert(word)
        
        good_reviews = []
        
        for i,word in enumerate(B):
            score = 0
            for w in word.split('_'):
                if trie.search(w):
                    score = score + 1
            good_reviews.append([i, score])
        
        good_reviews = sorted(good_reviews, key=lambda x: x[1], reverse=True)
        review_order = []
        for i, score in good_reviews:
            review_order.append(i)

        return review_order
