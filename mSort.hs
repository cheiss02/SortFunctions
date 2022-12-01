module Test where
main::IO()
-- Source https://101wiki.softlang.org/Concept:Merge_sort
-- Polymorphic sorting
sort :: Ord a => [a] -> [a]
sort [] = []
sort [x] = [x]
sort xs = merge (sort ys) (sort zs)
  where
    (ys,zs) = split xs

-- Split a list into halves
split :: [a] -> ([a],[a])
split xs = (take len xs, drop len xs)
  where
    len = length xs `div` 2

-- Merge sorted sublists
merge :: Ord a => [a] -> [a] -> [a]
merge [] ys = ys
merge xs [] = xs
merge (x:xs) (y:ys) =
  if x<=y 
    then x : merge xs (y:ys)
    else y : merge (x:xs) ys





main = do
print(sort[4,3,2,10])
print(sort [4,3,2,10,35413,3132,546,68,65465,65,65465,5])
print(sort [4,3,687,654,678435,65465,654,2,10])
print(sort [4,6,7,58,68,852,6546,3,2,10])
print(sort [4])
print(sort [0])
print(sort [9,0])
print(sort[4,3,2,10])

