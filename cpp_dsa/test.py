import pandas as pd import numpy as np import time import re # Generate a large dataset for testing num_rows = 1000000 # Number of rows to simulate a large dataset source_data = { 'Keywords': np.random.choice([ 'I have a Computer', 'I have a TV', "I'll eat chips today", "I'll go to school today", 'I read in class six', 'My Computer is not working', "I'll buy another new TV" ], num_rows), 'BUs': np.random.choice(['PPS', 'HP', 'GBS', 'PPS GBS', 'Pan HP', 'CPS', 'Commercial'], num_rows) } target_data = { 'Target': np.random.choice(['Laptop', 'Mobile', 'BU4', 'BU5', 'five', 'Laptop', 'Mobile'], num_rows) } # Create dataframes source_df = pd.DataFrame(source_data) target_df = pd.DataFrame(target_data) mapping1_df = pd.DataFrame({ 'Keywords': ['Computer', 'TV', 'six'], 'Map_Key': ['Laptop', 'Mobile', 'five'] }) mapping2_df = pd.DataFrame({ 'BU': ['PPS', 'Pan HP', 'CPS', 'PPS GBS', 'Commercial', 'HP', 'GBS'], 'Map_BU': ['BU1', 'BU3', 'BU7', 'BU5', 'BU2', 'BU8', 'BU4'] }) # Create mapping dictionaries mapping1_dict = dict(zip(mapping1_df['Keywords'].str.lower(), mapping1_df['Map_Key'].str.lower())) mapping2_dict = dict(zip(mapping2_df['BU'].str.lower(), mapping2_df['Map_BU'].str.lower())) # Measure the time start_time = time.time() # Pre-compile regex pattern outside the loop pattern = re.compile(r'\b(?:' + '|'.join(map(re.escape, mapping1_df['Keywords'].str.lower())) + r')\b') # Initialize the Result column with an empty string source_df['Result'] = '' # Iterate over each sentence for idx, row in source_df.iterrows(): sentence = row['Keywords'].lower() bu = row['BUs'].lower() target_value = target_df.at[idx, 'Target'].lower() # Use the compiled regex pattern to find if any keyword exists in the sentence match = pattern.search(sentence) if match: # If keyword found, get the map_key and validate map_key = mapping1_dict[match.group()] source_df.at[idx, 'Result'] = 'success' if map_key == target_value else 'failure' else: # If no keyword found, check BU mapping and validate map_bu = mapping2_dict.get(bu, None) source_df.at[idx, 'Result'] = 'success' if map_bu == target_value else 'failure' end_time = time.time() optimized_time = end_time - start_time print(f"Optimized approach with direct DataFrame update time: {optimized_time:.2f} seconds") # Display the result DataFrame print(source_df[['Keywords', 'BUs', 'Result']].head())