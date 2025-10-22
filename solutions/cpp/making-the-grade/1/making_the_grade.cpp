#include <array>
#include <string>
#include <vector>
#include <cmath>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    // TODO: Implement round_down_scores
    std::vector<int> a;
    for (int n = 0; n < student_scores.size(); n++)
            a.push_back(std::floor(student_scores[n]));
    return a;
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    // TODO: Implement count_failed_students
    int count = 0;
    for (int n : student_scores)
        (n < 41) ? count++ : count; 
    return count;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    // TODO: Implement letter_grades
    
    std::array<int, 4> grades;
    double interval = (highest_score - 41) / 4.0;  
    int rounded_interval = std::ceil(interval);    
    
    grades[0] = 41;                               
    grades[1] = 41 + rounded_interval;            
    grades[2] = 41 + 2 * rounded_interval;        
    grades[3] = 41 + 3 * rounded_interval;        
    
    return grades;
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(
    std::vector<int> student_scores, std::vector<std::string> student_names) {
    // TODO: Implement student_ranking
    std::vector<std::string> result;
    int i = 1;
    while (i < student_scores.size()+1)
    {
            result.push_back(std::to_string(i) + ". " + student_names[i-1] + ": " + std::to_string(student_scores[i-1]));
            i++;
    }
    return result;
}

// Create a string that contains the name of the first student to make a perfect
// score on the exam.
std::string perfect_score(std::vector<int> student_scores,
                          std::vector<std::string> student_names) {
    // TODO: Implement perfect_score
    for (int i = 0; i < student_scores.size(); i++)
    {
        if (student_scores[i] == 100 )
            return student_names[i];
    }
    return "";
}
