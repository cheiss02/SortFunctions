import Data.List
import Data.Ord

numbers = sortBy (comparing id)[645.41, 37.59, 76.41, 5.31, -34.23, 1.11, 1.10, 23.46, 635.47, -876.32, 467.83, 62.25]
people = sortBy (comparing fst) [("Hal", 20), ("Susann", 31), ("Dwight", 19), ("Kassandra", 21), ("Lawrence", 25), ("Cindy", 22), ("Cory", 27), ("Mac", 19),("Romana", 27), ("Doretha", 32), ("Danna", 20), ("Zara", 23), ("Rosalyn", 26), ("Risa", 24), ("Benny", 28), ("Juan", 33), ("Natalie", 25)]
people2 = sortBy (comparing (\(a,v) -> (Down v, a))) [("Hal", 20), ("Susann", 31), ("Dwight", 19), ("Kassandra", 21), ("Lawrence", 25), ("Cindy", 22), ("Cory", 27), ("Mac", 19),("Romana", 27), ("Doretha", 32), ("Danna", 20), ("Zara", 23), ("Rosalyn", 26), ("Risa", 24), ("Benny", 28), ("Juan", 33), ("Natalie", 25)]



main = do
putStrLn "Order numbers in ascending Order. \n"

print (numbers)
putStrLn "--------------------------------------------------------------------------------------------------"
putStrLn "\n Order people alphabetically (lexicographically) by name. \n"
print (people)
putStrLn "--------------------------------------------------------------------------------------------------"
putStrLn "\n Sort descending by age, where people of the same age should be sorted alphabetically (lexicographically).\n"
print (people2)