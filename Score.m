disp('Input three grades'); % asking user to print three grades
num1 = input('Number 1  -  '); % storing the user input to num1
num2 = input('Number 2  -  '); % storing the user input to num2
num3 = input('Number 3  -  '); % storing the user input to num3

fprintf('Total Score  - %d\t',(num1+num2+num3)); % to find the total score
fprintf('\nAverage Score  - %f\t',((num1+num2)/2)); % to find the average of the first and second grades
fprintf('\nSmallest Score  - %d\t',min([num1 num2 num3])); % to find the smallest score obtained by the student
