#FACT - FRENZY - Multiplayer Quiz Game

Developed for Intermediate Programming (CSE 1320)
Team Members:

Keven Olvera Contreraz (1001809730)
Emma Slonaker (1002082749)
Gurpreet Banwait (1002113712)
Hilary Ha (1002142734)
Mentor: Marika Apostolova
TA: Arjun Dahal

Table of Contents
*Introduction
*Current Systems
*Proposed Model
*Program Design
*Testing
*Conclusion
*References
*Introduction

Fact Frenzy is a multiplayer quiz game with four categories: History, Geography, Entertainment, and Food. Players can choose to play solo or compete with another player. The game features five difficulty levels ranging from very easy (100 points) to very hard (500 points). Each player takes turns answering questions, earning points for correct answers, and the game concludes after 10 rounds.

Current Systems
Fact Frenzy is inspired by the game Jeopardy. Similar to Jeopardy, players select categories and difficulty levels to answer questions. Points are awarded for correct answers, and the game operates in a pass-and-play style for multiple players.

Proposed Model
Game Structure:

#Categories: History, Geography, Entertainment, Food
Difficulty levels: Very Easy, Easy, Medium, Hard, Very Hard
20 total questions (5 per category, 1 for each difficulty level)
Pass-and-play multiplayer for up to 2 players

Program Design
Fact Frenzy is built using C with the following features:

Two primary structures: Question and Player
Questions are stored in arrays, one for each category
Players earn points based on the difficulty of correctly answered questions
Six functions control game logic: four category functions, one to display player points, and one to check for reused questions
Key Modules:
Menu Screen: Players choose categories and difficulty levels
Question Logic: Players answer questions, and points are awarded for correct answers
Player Struct: Stores player names and points
Question Struct: Stores questions and whether they’ve been answered
Testing
The game was thoroughly tested with multiple cases, including alternating turns for multiplayer and ensuring questions were not reused. Here are some significant fixes during the testing phase:

Multiplayer turn alternation fixed with nested loops
Questions being skipped due to incorrect input handling were resolved
Incorrect point awarding logic was corrected

Test Log:
11/06/2023: Fixed multiplayer turn alternation issue
11/07/2023: Implemented check for previously answered questions
11/10/2023: Resolved points being awarded for incorrect answers and input handling

Conclusion

Program Weaknesses:
Limited to 10 rounds per game
Only allows up to 2 players in a single game
No graphical interface, leading to a text-heavy experience
Program Strengths:
Robust input validation and error checking
Flexible loop structure allows replaying with different settings
Future Enhancements:
Add a graphical user interface for better usability
Implement a system to randomize questions for replayability
Expand multiplayer capabilities beyond 2 players
References
State Cookie of Texas Trivia
History Trivia Questions
Geography Trivia
Barbenheimer Box Office
